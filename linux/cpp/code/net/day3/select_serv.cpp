#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/wait.h>
#include <ctype.h>
#include "wrap.h"
// #include <asm-generic/signal.h>
#include <sys/select.h>
#include <algorithm>
using namespace std;
int main(){
    //创建socket
    int lfd = Socket(AF_INET,SOCK_STREAM,0);
    //设置多路复用
    int opt = 1;
    setsockopt(lfd,SOL_SOCKET,SO_REUSEADDR,&opt,sizeof(opt));
    //构建serve结构体
    struct sockaddr_in serve;
    bzero(&serve,sizeof(serve));
    serve.sin_family = AF_INET;
    serve.sin_port = htons(8888);
    serve.sin_addr.s_addr = INADDR_ANY;

    //bind
    int ret = Bind(lfd,(struct sockaddr*)&serve,sizeof(serve));

    //listen
    Listen(lfd,128);
    fd_set readfd;
    bzero(&readfd,sizeof(readfd));
    
    int maxfd = lfd+1;
    FD_SET(lfd,&readfd);
    fd_set tempfd;
    bzero(&tempfd,sizeof(tempfd));
    int n;
    char buf[1024];
    //接收连接、数据
    while(1){
        tempfd = readfd;
        n = select(maxfd,&tempfd,NULL,NULL,NULL); //select返回的是有几个fd有变化
        if(n<0){
            if(errno == EINTR){
                continue;
            }else{
                break;
            }
        }
        if(FD_ISSET(lfd,&tempfd)){
            int cfd = Accept(lfd,NULL,0);
            //两步操作，维护最大fd，将cfd加入readfd中
            maxfd = max(maxfd,cfd)+1;
            FD_SET(cfd,&readfd);

            //在建立连接之后如果没有其他操作，就进行下一轮
            if(--n==0) continue;
        }
        for(int i = lfd+1;i<maxfd;i++){
            if(FD_ISSET(i,&tempfd)){
                
                bzero(buf,sizeof(buf));
                
                int r = Read(i,&buf,sizeof(buf));
                if(r<=0){
                    close(i);
                    FD_CLR(i,&readfd);
                }
                for(int j = 0;j<r;j++){
                    buf[j] = toupper(buf[j]);
                }
                Write(i,&buf,r);
                
                if(--n == 0) break;
            }
        }
    }
    close(lfd);
}