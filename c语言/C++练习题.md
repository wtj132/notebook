# C++练习题

## acwing

###函数

### 817 数组去重

```c++
#include <iostream>
#include<math.h>
#include<string>
using namespace std;

int get_unique_count(int a[],int n){
    int b[2000];
    int num(0);
    for(int i=0;i<2000;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++)
      //把a[i]作为索引，若a[i]相同，则会指向b中同一个数
        if(b[a[i]]==0){
            num++;
            b[a[i]]=1;
        }
    return num;
}

int main(void) {
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    cout<<get_unique_count(b, a);
    
    
    return 0;
}

```

### 821 跳台阶

```c++
#include <bits/stdc++.h>
using namespace std;
int n;
int cmt=0;
void f(int k)
{
  if(k==n) cmt++;
  else if(k<n)
  {
    f(k+1);
    f(k+2);
  }
}
int main()
{

  cin>>n;
  f(0);
  cout<<cmt<<endl;
  return 0;
}
```

深层搜索

![IMG_7745](/var/folders/mb/yh1hg7911lj4llsgy361sfsr0000gn/T/com.apple.useractivityd/shared-pasteboard/items/C249C7CA-40D7-4991-B420-1808C12FEA87/IMG_7745.jpeg)



### 823 排列

```c++
#include<iostream>
#include<cstring>
using namespace std;

const int N = 10;//根据题目，最大数字是9
int q[N];//存储的是遍历到的数字
bool st[N];//判断数字是否被遍历
int n;//这里n一定要定义再全局变量里面，因为下面这个函数需要使用

//深度优先搜索遍历
void dfs(int u)
{
    //当遍历到最后一层的时候,先输出，再退出
    if(u == n)
    {
        for(int i = 0 ; i<n ; i++) cout<<q[i]<<" ";
        cout<<endl;
        return;//退出函数
    }

    for(int i = 1 ; i <=n ; i++)//按字典序遍历数字
        if(!st[i])//当这个数字不存在于q[]数组中,可以进入，否则继续遍历
        {
            q[u] = i;//存入数字
            st[i] = true;//先将数字进行标记
            dfs(u+1);//进入下一层
            st[i] = false;//当从下一层出来的时候，这个数字也不再被标记
        }
}

int main()
{
    cin>>n;

    dfs(0);

    return 0;
}

作者：Fphoenix
链接：https://www.acwing.com/solution/content/25275/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
```

深度搜索



###结构体、类、指针、引用

#### 链表

```c++
#include <iostream>

using namespace std;
struct Node{
    int value;
    Node *next;
};

int main()
{
    int val;
    cin>>val;
    Node* head=new Node;
    head->value=val;
    head->next=NULL;
    while(cin>>val){
        Node *p=new Node;
        Node *last=new Node;
        last=head;
        p->value=val;
        if(not last->next){
            last->next=p;
        }else{
            while(last->next){
                last=last->next;
            }
            last->next=p;
        }
        
    }
    Node *i=head;
    do{
        cout<<i->value;
        i=i->next;
        
    }while(i);
  return 0;
}
```

### 算法

#### 790 数的三次方

```c++
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int q(double a){
    return a*a*a;
}

int main(void){
    int n;
    cin>>n;
    double l=-10000.;
    double r=10000.;
    double mid;
    while(r-l>=1e-7){
        mid=(l+r)/2;
        if(q(mid)>=n) r=mid;
        else l=mid;
    }
    cout<<mid<<endl;
}
```







