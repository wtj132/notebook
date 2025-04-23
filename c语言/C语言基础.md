# day1

## 代码结构

```c
// 预处理，相当于导入库 = import
#include<stdio.h>    

// 主程序入口，int表示返回的是一个int整数
int main();  
{
    printf("hello world");
    
    // 返回值
    return 0
        
}
```



## 注释的使用

==基础操作==

按住alt可以纵向多选

注释快捷键 

```c
crtl+k+c 
crtl+k+u
```





## 关键字

 int ，return等，类似于函数

## 常量

整型、实型（小数）、字符（单引号）、字符串（双引号）

格式控制符（占位符）

| 整型   | %d   |
| ------ | ---- |
| 实型   | %f   |
| 字符   | %c   |
| 字符串 | %s   |

### 输出多个常量

占位符和数据依次填补

```c
printf("年龄：%d，住址：%s"，1，北京市)
```

换行符 \r\n，win中\r是回到行首（return），\n是向上滚动一行（next），可以直接用\n表示

```c
#include<stdio.h>

int main()
{
	printf("年龄：%d\n住址：%s",1,"北京市");
	return 0;

}

//年龄：1
//住址：北京市
```

##  



# week 2

## 输入

scanf(“%d”,&price);

==&==的含义是将读入的值赋值给哪个变量

scanf中的东西是一定要输入的，如果不满足或输入错误的字符就会报错

```c
#include<stdio.h>

int main()
{
    int a=0;
    int b=0;
	printf("请输入两个整数");
    //一次输入多个值
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d",a,b,a+b)
    return 0;
}
```

## 变量



构建，赋值

<类型名称><变量名称>=<初始值>

```c
#include<stdio.h>

int main()
{
    //定义格式：数据类型 变量名
    int a;
    a=10;
    printf("%d",a)
}
```

## 常量

const int a=10

a为只读常量，不可更改

```c
#include<stdio.h>

int main()
{
    //定义格式：数据类型 变量名
    const int amount=100
    printf("%d",a)
}
```

## 浮点数

两个整数做运算的时候结果只能是整数

如果整型除以整数，结果会把小数后面的值去除，结果仍是整数（取整）

```c
#include<stdio.h>
int main()
{
    int a=10;
    int b=8;
    
    printf("%d/%d=%d",a,b,a/b);
    
    //如果用整数除以浮点数
    printf("%d",10.0/b);
    //就会报错，因为结果是浮点数，而前面是%d，
    printf("%f",10.0/b);
    
    return 0;
        
}
```

```c
#include<stdio.h>
int main()
{
    double a;
    double b;
    //输入double型变量要用%lf
    scanf("%lf %lf",a,b);
    //这里使用scanf会报错，要用scanf_s
    
    printf("%f",a/b)
    
    return 0;
        
}
```

## 表达式

### 运算符

1.四则运算，取余（%）

```c
int main()
{
    int hour1,min1;
    int hour2,min2;
    
    scanf("%d %d",&hour1,&min1);
    scanf("%d %d",&hour2,&min2);
    
    int t1=hour1*60-min1;
    int t2=hour2*60-min2;
    
    int t=t1-t2;
        
    printf("%d,%d",t/60,t%60);
    
    return 0;
        
       
}


```

2.复合运算符

+=，-=，*=，/=

3.特殊运算符

递增(++),递减(–)

` count++ `==`count+=1`

`a++`与`++a`的值不同

```c
#include<stdio.h>
int main()
{
    int a = 1;

    printf("a++=%d\n", a++);
    printf("a=%d\n", a);
    
    printf("++a=%d\n", ++a);
    printf("a=%d\n", a);
   
    return 0;


}
//前缀是+1以后的，后缀是+1以前的
//a++ = 1
//a=2
//++a = 3
//a=3
```

4.运算符优先级

单目运算符的优先级最高（运算方向自右向左）

>   a*-b  此时的-为单目取负而不是加减，相当于a乘负b



5.算子



# week 3

## 判断

### if

`if(条件成立){`

`执行动作}`

1.  关系运算

    | ==   | >=       | !=   | <=       |      |
    | ---- | -------- | ---- | -------- | ---- |
    | 等于 | 大于等于 | 不等 | 小于等于 |      |

    关系运算的优先级比算数低，比赋值高

    连续的关系运算是从左到右

    `a==b==c` `a>=b>=c`

​	

else 

else总是与最近的if进行匹配

缩进不能改变else的匹配

```c
#include<stdio.h>
int main()
{
    int a;
    int b;

    scanf_s("%d %d", &a, &b);
//此处有{}，所以else与第一个if匹配
    if (a == 1) {
        if (b == 2) printf("readdy");
    }
    else
        printf("go away");


    return 0;
}
```

```c
#include<stdio.h>
int main()
{
    int a;
    int b;

    scanf_s("%d %d", &a, &b);

    if (a == 1)
        if (b == 2) printf("readdy");
    
    //这里的else虽然与第一个if对齐，但是与第二个else匹配
    
    else
        printf("go away");


    return 0;
}
```





if 语句的两种写法

```c
//第一种，带{}
if (a>=b){
    printf("a大")
}

//第二种不带{}，在if语句后没有代表结束的,在只需要执行单个命令的时候使用，如果if判断后有多个命令，则需要用{}
if (a>=b)
    printf("a大");
```

### 嵌套

### 级联if

分段函数

```c
#include<stdio.h>
int main()
{
    int x;
    int y;
    scanf_s("%d", &x);
    if (x <= 1) {
        y = 1;
    } else if (x == 0) {
        y = 0;
    } else {
        y = 2 * x;
    }

    
    return 0;
}
```

### 多路分支 switch-case语句

```c
#include<stdio.h>
int main()
{
    int a;
    scanf_s("%d", &a);
    
    //switch-case语句相对于if-else来说不需要一级一级进行判断，而是根据case的值直接去执行相应的命令
    //如果不在每一个case后面加break，那么程序会从对应的case向下执行至default或者break
    
    switch (a) {
    case 1:
        printf("a=%d", a);
    case 2:
        printf("a=%d", a);
    case 3:
        printf("a=%d", a);
    default:
        printf("没找到a");

    }

    return 0;
}
//输入2
//a=2a=2没找到a



#include<stdio.h>
int main()
{
    int a;
    scanf_s("%d", &a);
    
    //switch-case语句相对于if-else来说不需要一级一级进行判断，而是根据case的值直接去执行相应的命令
    //switch语句的type需要是int类型，既可以是常数，也可以是常数计算表达式，也可以是常量
    switch (a) {
    case 1:
        printf("a=%d", a);
        break;
    case 2:
        printf("a=%d", a);
        break;
    case 3:
        printf("a=%d", a);
        break;
    default:
        printf("没找到a");

    }

    return 0;
}
```



# week4

## while循环

同python，反复多次判断是否满足条件，只有当满足条件才会跳出循环

## do-while循环

在进入循环前不做检查，先执行完一次循环体的代码后在进行判断是否满足条件

```c
#include<stdio.h>
int main()
{
    int a;
    int n = 0;
    scanf_s("%d", &a);
    
    do {
        n++;
        a /= 10;
        } while (a > 0); 
    printf("输入有%d位", n);
        
    return 0;
}
```

while循环例子

平均数

```c
#include<stdio.h>
//平均数 
int main()
{
    int a=0;
    int b = 0;
    int n = 0;
   
    while (a != -1){
        scanf_s("%d", &a);
        if (a != -1) {
            b += a;
            n++;
        }
    } 
    printf("平均数为%f", b*1.0 / n);
    return 0;
}
```

逆序

```c
#include<stdio.h>
//逆序
int main()
{
    int x;
    scanf_s("%d", &x);
    int digit = 0;

    while (x > 0) {
        digit = x % 10;
        x /= 10 ;
        printf("%d", digit);
    }
    return 0;
}

```

# week5

## for循环

1.  `for (int i=1;i<=n;i++)`  起始值，判断条件，每次循环对i执行的操作

2.  for循环中每一个表达式都可以省略

3.  for循环省略初始值和操作相当于while循环

    ​	` for(;条件;)=while(条件)`

4.  break和continue

    1.  break是打破循环

        break只能离开它所在的循环

        或者可以用goto语句离开循环

    2.  continue是跳过循环中剩下没有执行的语句

```c
#include<stdio.h>
//素数
int main()
{
    int x = 2;
    int count = 0;
    while (count < 50) {
        int is_prime = 1;
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            printf("%d  ", x);
            count++;
        
        }
        x++;
    }

    return 0;
}
```

```c
#include<stdio.h>
//正序分解
int main()
{
    int x;
    int t;
    int b;
    int mask = 1;
    scanf_s("%d", &x);
    t = x;
    while (t > 9) {
        t /= 10;
        mask *= 10;
    }
    while (mask > 0) {
        b = x / mask;
        printf("%d ", b);
        x = x % mask;
        mask /= 10;
    }
    return 0;
}

```



# week6

## 数据类型

### 整数

1.  int char  long longlong short

### 浮点数

1.  float double

1.  逻辑

2.  指针

3.  自定义

4.  sizeof

    1.  运算符，可以给出某个变量在内存中所占的内存数

        sizeof是静态的，不会执行后面括号中的操作，只会看括号中的内容占据的内存数

        ```c
        #include<stdio.h>
        
        int main()
        {
            int a;
            a = 4;
            //a++并没有被执行
            printf("%d\n", sizeof(a++));
            printf("%d", sizeof(int));
            return 0;
        }
        
        
        //4
        //4
        ```

        

5.  unsigned

    1.  不考虑符号，不以补码的形式表示，只有0和正数部分

    2.  负数的表示方法，补码，-a=0-a，溢出的1位不表示

        ​	

    3.  ```c
        #include<stdio.h>
        
        int main()
        {
            char c;
            unsigned char b;
            int a;
        
           //11111111
            c = 255;
            b = 255;
            //00000000 00000000 00000000 11111111
            a = 255;
            printf("a=%d,b=%d,c=%d", a, b, c);
        
            return 0;
        
        }
        
        //a=255,b=255,c=-1
        ```

6.  整数的输入输出

    1.  只有两种形式

        %d：int

        %u：unsigned

        %ld：longlong

        %lu：unsigned longlong

    2.  一个数字如果是0开头表示8进制，0x开头表示16进制

        ```c
        #include<stdio.h>
        
        int main()
        {
            int a = 014;
            int b = 0x14;
            printf("a=%d,b=%d", a, b);
        
            return 0;
        
        
        }
        
        //a=12,b=20
        ```

        

7.  浮点数

    1.  float

        输入 %f    输出 %f %e(科学计数法表示)

    2.  double

        输入 %lf    输出 %f %e(科学计数法表示)

        在%和f之间加上.n可以指定输出小数点后几位

        `printf("%.4f",a)`

    3.  无穷大不能用整型表示，但可以用浮点数表示

    

8.  浮点数的精度

    1.  带小数点的字面变量是double而不是float，float需要用f后缀来表示

    2.  由于精度问题，所以直接判断两个浮点数是否相等可能会失败

        应该用两数的差是否小于一个很小的数来判断他们是否相等，一般取浮点数能表达的最小精度

        fabs()取绝对值

        ```c
        #include<stdio.h>
        
        int main()
        {
            float a, b;
            a = 1.123f;
            b = 2.345f;
        
        
            printf(" %d", a+b==3.468);
        
            return 0;
        
        
        }
        
        //0
        
        #include<stdio.h>
        
        int main()
        {
            float a, b,c;
            a = 1.123f;
            b = 2.345f;
            c = a + b;
        
        
            printf(" %.10f", c);
        
            return 0;
        
        
        }
        
        // 3.4679999352
        ```

        

### 字符

char

```c
#include<stdio.h>

int main()
{
    int a;
    char b;
    // 空格可以有效划分输入的两个整数为前整数后字符，防止数于数时间粘连
    scanf_s("%d %c", &a, &b);

    printf("a-%d b=%c b=%d", a, b, b);

    return 0;


}

//12 5
//a - 12 b = 5 b = 53
```

逃逸字符

| 字符 | 意义         | 字符 | 意义   |
| ---- | ------------ | ---- | ------ |
| \b   | 回退一格     | \ "  | 双引号 |
| \t   | 到下一个表格 | \ '  | 单引号 |
| \n   |              | \ \  | 反斜杠 |

   

### 类型转换

当运算符的两边出现不一致的类型，会自动转化为较大的类型，所以int和float在进行计算的时候会自动转换为float

char-short-int-long-longlong

对于printf，会自动转化

但是scanf不行，需要确定的类型

==强制类型转换==

(类型)值

`(int)123.4`   这里需要注意1.小的变量不能表示大的变量 ；2.强制类型转换是计算出了一个新的类型的值，不对原有变量做变换

```c
#include<stdio.h>

int main()
{
    int a=3;
    char b=5;
    printf("%d %f %d", (char)a, (float)b,b);

    return 0;


}

//3 5.000000 5
```



### 逻辑运算

| 运算符 | 描述 | 例子 |
| ------ | ---- | ---- |
| ！     | 非   |      |
| &&     | 与   |      |
| \|\|   | 或   |      |

```c
#include<stdio.h>

int main(void){
    char a;
    scanf("%c",&a);
    // 判断输入的是大写还是小写
    if (a<'Z'&&a>'A'){
        printf("%c为大写 \n",a);
    } else{
        printf("%c为小写 \n",a);
    }
    return 0;
}

//C为大写

```

==逻辑运算是自左向右的，所以如果左边的结果能够决定结果，就不会执行右边的计算==

### 条件运算符

`count=(count>10)?count+10:count+20`

括号中是要判断的条件，？是条件满足时执行的句子，：后是条件不满足执行的句子

条件运算符的优先级高于赋值但是小于其他的运算符



### 逗号运算符

 ,运算是将（3+4，5+6）中，后面的运算结果当做整个的结果进行赋值，主要用在for判断语句中

```

```





# week7

## 函数

```c
#include<stdio.h>
//其中 void是函数头,表示函数最后返回的东西,void表示无返回,hello为函数名,括号中的是函数需要的参数
void hello(void){
    printf("hello");
}

int main(void){
    hello();
    
    return 0;
}

//hello
```

从函数中返回

return

函数中可以出现多个return



函数调用，需要将函数放到主函数上面，才能调用

如果想将函数放到后面则需要再开头进行声明

```c
#include<stdio.h>
//在代码开头可以先对函数进行声明,这样就可以先看主函数,将函数的主体(定义)放到主函数之后
//函数声明可以不加函数参数的名称，因为编译器只会检查函数返回的类型
void hello(void);

int main(void){
    hello();
    
    return 0;
}
void hello(void){
    printf("hello");
}
//hello
```



在调用函数的时候如果传入的参数和函数所需的参数类型不匹配，函数会自动转化



在调用函数的时候，只能传值给函数，函数中参数的变化不会影响main中参数



### 本地变量

本地变量定义在块内

程序在这个块之前当变量不存在，离开块变量消失

在不同块中可以定义同名变量，块内的变量会临时掩盖块外的变量，同块中不行

本地变量不会被默认初始化，参数在进入函数的时候被初始化





##c++内容

### 引用

引用是C++语言的一个特殊的数据类型描述，它是对已存在变量的别名。通过引用，我们可以使用不同的名称来访问同一个内存地址的变量。

```c++
#include <iostream>
#include<math.h>
#include<string>
using namespace std;

int main(void) {
    int a=4;
    int &b=a;
    printf("%p\n%p",&a,&b);
    return 0;
}

//0x16fdff2e8
//0x16fdff2e8

```

这里的b就相当于是a的另外一个名字，两个变量指向同一个地址

引用通常用在函数的参数传递中。





==c++==允许有多个相同名字的函数，但是同名函数之间的参数类型不能相同

如果在函数的结尾不写return，函数仍能返回一个值，但跟函数的结构有关，不一定是最后的值

##函数递归

在函数内部调用自己

```c++
#include <iostream>
#include<math.h>
#include<string>
int factor(int x){
    if(x==1) return 1;
    return x*factor(x-1);
}
using namespace std;

int main(void) {
    cout<<factor(5)<<endl;
    return 0;
}
```

![image-20241016143509859](/Users/wangtian/Library/Application Support/typora-user-images/image-20241016143509859.jpg)



# week8

## 数组

定义数组 类型+名称+[元素数量]

```c
// 定义一个长度为10的数组
int unmber[10]
```

1.数组中的元素具有相同的类型

2.数组的大小不能改变

3.数组中的元素在内存中依次排列



在给定的数组中找具体的参数

- 数组的集成初始化

  `int a[]={1,2,3,4,5}`

  ```c
  //如果只初始化一个值，则数组中只有第一个数为初始化的值，剩下的均会初始化为0
  int a[10]={2}
  
  //2 0 0 0 0 0 0 0 0
  ```

- 计算数组的大小(sizeof函数)

  用数组整体的sizeof除数组中第一个元素的sizeof，得到的就是数组中元素的个数

  ```c
  #include<stdio.h>
  
  
  int main(void){
      int list[10]={1,2,3,4,5};
      printf("%d \t",sizeof(list));
      printf("%d \n",sizeof(list[0]));
      return 0;
  }
  
  //40  4
  
  
  
  #include<stdio.h>
  
  
  int main(void){
      double list[10]={1.,2.,3.,4.,5.};
      printf("%d \t",sizeof(list));
      printf("%d \n",sizeof(list[0]));
      return 0;
  }
  
  //80     8 
  ```

  数组不能赋值，如果想把一个数组赋给另一个数组就只能遍历

  ```c
  #include<stdio.h>
  
  int search(int key,int a[],int len);
  
  
  int main(void){
      int a[]={1,2,3,4,5,6,7};
      int key=3;
      int len;
      int ret;
      len=sizeof(a)/sizeof(a[0]);
      ret=search(key,a,len);
      if(ret!=-1){
          printf("key在第%d个 \n",ret);
      }
      return 0;
  }
   
  // 数组作为函数参数时，需要传入另一个参数来表达数组的大小
  int search(int key,int a[],int len){
      int ret=-1;
      int i=0;
      for(i=0;i<len;i++){
          if(a[i]==key){
              ret=i;
              break;
          }
      }
      return ret;
  }
  
  // key在第2个
  ```
  
  ## 二维数组
  
  `int a[2][5]`  a是一个2行5列的数组，对二维数组的遍历需要两个索引

  二维数组的初始化行数可以省略但列数不能

  ```c
  #include<stdio.h>
  
  int search(int key,int a[],int len);
  
  
  int main(void){
      int a[2][4]={{1,2,3,4}};
      for(int i=0;i<2;i++){
          for(int j=0;j<4;j++){
              printf("%d",a[i][j]);
          }
          printf("\n");
      }
      return 0;
  }
  
  
  
  //1234
  //0000
  ```
  
  
  
  
  

# week9

## 取地址运算

& 获得变量地址

当想要printf数据地址时，用%p



连续定义的两个变量地址相邻

```c
#include<stdio.h>

int search(int key,int a[],int len);


int main(void){
    int i;
    int j;
    printf("%p \n",&i);
    printf("%p \n",&j);
    return 0;
}



// 一个int占据4个字节，先定义的变量地址在上，后定义的变量地址在下，微机原理，堆栈
//0x16fdff308
//0x16fdff304

```

数组地址

```c
#include<stdio.h>

int main(void){
    int a[10];
    int b[4];
    int c[2];
    printf("%p \n",&a);
    
    printf("%p \n",a);
    
    printf("%p \n",&a[0]);
    
    printf("%p \n",&a[9]);
    
    printf("%p \n",&b[3]);
    
    printf("%p \n",b);
    
    
    return 0;
}



//0x16fdff2e0
//0x16fdff2e0
//0x16fdff2e0
//0x16fdff304
//0x16fdff2dc
//0x16fdff2d0 
```

![image-20240817105936275](/Users/wangtian/Library/Application Support/typora-user-images/image-20240817105936275.png)



如果知道了一个数据的地址，怎么通过地址访问变量，拿到数据

## 指针

`int *p` 表示指针

`int* p,q`  =`int *p,q `代表的是p为指针，而q只是一个int



通过更改地址中数据的值可以实现函数外参数的改变，而不仅仅是参数的传递

```c
#include<stdio.h>
//在函数中改变main中参数的值

void change(int *p);

int main(void){
    int a=9;
    change(&a);
    printf("a=%d\n",a);
    return 0;
}

//直接对地址中参数的值进行更改，不受函数的影响，可以改变任意位置的变量的值
void change(int *p){
    *p+=1;
}

//a=10
```

## 指针应用场景

1.交换两个变量的值

```c
#include<stdio.h>
//交换a，b的值

void change(int *p,int *q);

int main(void){
    int a=9;
    int b=10;
    change(&a,&b);
    printf("a=%d b=%d\n",a,b);
    return 0;
}

void change(int *p,int *q){
    int t=*p;
    *p=*q;
    *q=t;
}

//a=10 b=9
```

2.函数返回多个值，传入的参数实际上是需要保存带回结果的变量

```c
#include<stdio.h>
//找最大最小值
void minmax(int a[],int len,int *p,int *q);

int main(void){
    int a[9]={4,5,6,7,8,1,2,3};
    int min,max;
    //这里对min，max进行初始化，确保min和max是a中的值，而避免初始化的值大于或小于数组中的所有数
    min=a[0];
    max=a[0];
    printf("%d\n",max);
    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    printf("min=%d,max=%d\n",min,max);
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}

void minmax(int a[],int len,int *p,int *q){
    int min=0,max=0;
    for(int i=0;i<len;i++){
        if (*p>a[i]){
            *p=a[i];
            min=i;
        }
        if (*q<a[i]){
            *q=a[i];
            max=i;
        }
    }
    printf("%d %d\n",min,max);
    printf("%d %d\n",a[min],a[max]);
}

//4
//8 4
//0 8
//min=0,max=8
//456781230
```

3.函数返回运算的结果，结果通过指针返回

​	常用套路：让函数返回特殊的不属于有效范围的值来表示出错(-1,0)，但当任何值都是有效值，就需要多个返回值



​	数组传入函数中的并不是这个数组，而是这个数组所在的地址，所以函数中(int a[])中的[]并不需要加任何值，也无法指定这个数组的任何元素，因为这里只是相当于说有一个数组的地址要传进来

```c
void minmax(int a[],int len,int *p,int *q);
void minmax(int *a,int len,int *p,int *q);
//二者等价
```

数组变量就是特殊的指针

`a=&a[0]`

```c
printf("%p",a);
printf("%p",&a);
//二者等价
```

==[]运算符既可以对数组做，也可以对指针做==

==*运算符既可以对指针也可以对数组做==

```c
#include<stdio.h>
//*运算符和[]运算符在指针和数组通用

int main(void){
    int a[9]={4,5,6,7,8,1,2,3};
    int b=9;
    int *p;
    p=&b;
    
    printf("a[0]=%d \n",*a);
    printf("b=%d\n",p[0]);
    printf("b=%d\n",p[4]);
    return 0;
}

//a[0]=4
//b=9
//b=6
```

数组是常量指针，所以不能被赋值

### 指针与const

1.如果指针是常量(相当于数组)

​	这个指针被创建出来后只能指向固定的地址，不能改变，即int *p;，其中的p不能被改变，而*p可以改变(==指针不可修改==)

2.如果指针指向的地址中为常量

​	则*p不能改变，即不能通过*p去给这个地址做新的赋值 (==通过指针不可修改==) 

```c
#include<stdio.h>
//*运算符和[]运算符在指针和数组通用

int main(void){
    int i=4;
    int j=5;
    
    //const在*前面，int *p是一个常量，*p是一个常量，不可以通过*p对i进行赋值，即通过指针不可修改
    const int *p=&i;
    //*p=1;
    //Read-only variable is not assignable
    
    //*p是一个常量，同p
    int const *p2=&i;
//    *p2=&p2;
//    Read-only variable is not assignable
    //const在*后面，代表指针不可修改
    int *const p3=&i;
    
    return 0;
}
```

3.可以将一个非const转换为const 

4.const int a[]={1,2,3,4}

​	其中a[]已经是const了，即指针不可修改，在前面在加上一个const代表这个列表中的所有int都是const，列表中的所有值都不可改变

​	常规用法是在传入函数是指定这是一个const，避免数组在函数中被修改



### 指针运算

1.对指针+1，新的值受指针类型的影响

```c
#include<stdio.h>
//*运算符和[]运算符在指针和数组通用

int main(void){
  
  	//sizeof(char)=1
    char a[]={1,2,3};
    char *p=a;
    printf("p的地址=%p\n",p);
    printf("p+1的地址=%p\n",p+1);
    
  	// sizeof(int)=4
    int b[]={1,2,3};
    int *q=b;
    printf("q的地址=%p\n",q);
    printf("q+1的地址=%p\n",q+1);
    
    char c[]={1,2,3};
    int *r=c;
    printf("r的地址=%p\n",r);
    printf("r+1的地址=%p\n",r+1);
    
    return 0;
}

//p的地址=0x16fdff2f0
//p+1的地址=0x16fdff2f1
//q的地址=0x16fdff2f8
//q+1的地址=0x16fdff2fc
//r的地址=0x16fdff2dc
//r+1的地址=0x16fdff2e0

```

2.对指针地址做运算，相当于对数组索引取值

```c
#include<stdio.h>


int main(void){
    char a[]={1,2,3};
    char *p=a;
    //*(p+n)==a[n]
    printf("p+1=%d",*(p+1));
    
    return 0;
}

```

3.两个指针可以相减

```c
#include<stdio.h>


int main(void){
    char a[]={1,2,5};
    char *p=a;
    char *q=&a[2];

    printf("p的地址=%p\n",p);
    printf("q的地址=%p\n",q);
    printf("p-q=%d\n",p-q);
    
    int b[]={1,2,5};
    int *r=b;
    int *s=&b[2];
    
    printf("r的地址=%p\n",r);
    printf("s的地址=%p\n",s);
    printf("r-s=%d\n",r-s);
    
    return 0;
}

//p-q和r-s同样都等于-2，但地址的差不同，这可以说明指针相减的结果并不是地址直接相减，而是两个指针之间相差的数据的个数
//p的地址=0x16fdff2f0
//q的地址=0x16fdff2f2
//p-q=-2
//r的地址=0x16fdff2f8
//s的地址=0x16fdff300
//r-s=-2 
```

4.*p++

*运算符的优先级没有++高，所以会先对p做++，再取出p++位置的数据

由此，可以用*p++来遍历数组

```c
#include<stdio.h>


int main(void){
    int a[]={12,3,4,54,6,7,8,-1};
    int *p=a;
    
    while(*p!=-1){
        printf("%d  ",*p++);
    }
    printf("\n");
    
    for(p=a;*p!=-1;p++){
        printf("%d  ",*p);
    }
    printf("\n");
    return 0;
}


//12  3  4  54  6  7  8
//12  3  4  54  6  7  8  

```

5.指针比较=地址的比较



6.0地址

​	内存中的0地址通常是不能读写的地址，所以可以用0地址来表示返回的指针无效，或指针没有被初始化

​	NULL是一个预定定义的符号，用来表示0地址



7.指向不同类型的指针可以相互转换，但可能会出错

​	int类型的指针每个数据占据4个字节，char类型指针每个数据只占用1个字节，如果直接赋值*p=0，会使char *q中的前4个数据都变成0

```c
#include<stdio.h>


int main(void){
    int a[]={12,3,4,54,6,7,8,-1};
    int *p=a;
    char b[]={1,2,3,4,5};
    char *q=b;
    
    p=q;
    *p=0;
    for(int i=0;i<sizeof(b)/sizeof(b[0]);i++){
        printf("%d  ",b[i]);
    }
    printf("\n");
    return 0;
}


//0  0  0  0  5 
```

```c
#include<stdio.h>


int main(void){
    int a[]={1298989,3,4,54,6,7,8,-1};
    int *p=a;
    char b[]={1,2,3,4,5};
    char *q=b;
    //如果令char的地址等于int的地址，那对char进行赋值相当于对int某个数据的某几位进行修改
    q=p;
    *(q+2)=0;
    printf("%p\n",p);
    printf("%p\n",q+3);
    printf("%d\n",a[0]);
    return 0;
}

//
//0x16fdff2e0
//0x16fdff2e3
//53805
```

###动态内存分配	

malloc

向系统申请空间

在用完后要用free()函数将空间释放



# week10

## 字符数组

char a="hello"

## 字符串

在c语言中，字符串指的是以0结尾的遗传字符，0与'\0'一样，但0是int类型，占据4个字节，'\0'是str，只占据1个字节

`char a[]={'h','e','l','l','o','\0'}`

0或'\0'不是字符串的一部分，在计算字符串的长度时不包含这个0

字符串可以使用专门处理字符串的函数(string.h)

在字符串的结尾处要加上\0

------



### 定义字符串变量

1.char *s="hello world"

```c
#include<stdio.h>

int main(void){
    int a=0;
    char *s="hello";
    char *s2="hello";
    printf("a =%p\n",&a);
    printf("s =%p\n",s);
    printf("s2=%p\n",s2);
    return 0;
}

//相同字符串所指的指针指向相同，保存在内存中的代码段里
//与之前数字保存的位置不同，字符串只读，不能赋值
//a =0x16fdff308
//s =0x100003f94
//s2=0x100003f94
```

如果想要改写字符串，应该用数组去定义

```c
#include<stdio.h>

int main(void){
    char s[]="hello";
    s[0]='b';
    printf("s[0]=%c\n",s[0]);
    printf("s =%p\n",s);
    return 0;
}

//s[0]=b
//s =0x16fdff304
```

这里字符串(数组)的地址与之前数字的地址近似(本地变量)

==如果要构造字符串--用指针==   指针只读不能改写

`char* s="hello;"`

==如果要处理字符串--用数组==

`char s[]="hello";`

-----



### 字符串输入输出

1.字符串的赋值

```c
#include<stdio.h>

int main(void){
    char *s="hello";
    char *t;
    t=s;
    printf("s=%p\n",s);
    printf("t=%p\n",t);
    return 0;
}

//s=0x100003f94
//t=0x100003f94
```

赋值并没有创造一个新的字符串，而是将两个指针都指向了同一个地址



2.读入，输出字符串

`scanf("%s",string);`

`printf("%s",string);`

scanf读入一个单词，直到空格、tab和回车为止

```c
#include<stdio.h>

int main(void){
    char string[8];
    scanf("%s",string);
    printf("%s$$\n",string);
    return 0;
}


//hello后面有空格，所以scanf并没有读入空格后面的字符world，可能会漏掉一部分输入
//最初对string的定义也有缺陷，我们只知道他指向一个指针，而不知道输入有多大，所以也可能会导致无法存入所有的输入
//hello world
//hello$$

```

scanf要对输入进行限制，防止读入的数据大于定义的字符串导致程序崩溃

`scanf("%9s",string);`

其中9代表最多读入9个字符，超出的部分分给下一个scanf



3.空字符串

`char a[100]="";`

这是一个有效的字符串，初始位就为'\0'

`char a[]="";`

这个数组的长度为1，只有a[0]有效，等于'\0'



4.字符串数组

- `char a[][10]` 代表a[0]是一个长度为10的字符串，a[1]是一个长度为10的字符串...

```c
#include<stdio.h>

int main(void){
    char a[][8]={"hello","world","hello","world"};
    for (int i=0;i<4;i++){
        printf("a[%d]=%s\n",i,a[i]);
        printf("a[%d]的地址=%p\n",i,&a[i]);
    }
    return 0;
}

//a[0]=hello
//a[0]的地址=0x16fdff2e0
//a[1]=world
//a[1]的地址=0x16fdff2e8
//a[2]=hello
//a[2]的地址=0x16fdff2f0
//a[3]=world
//a[3]的地址=0x16fdff2f8


```

- `char* a[]` 代表a中每一个位置都是一个char*，都指向一个地址

  ```c
  #include<stdio.h>
  
  int main(void){
      char *a[]={"hello","world"};
      for(int i=0;i<2;i++){
          printf("a[%d]的地址=%p\n",i,&a[i]);
          printf("a[%d]=%s\n",i,a[i]);
      }
      return 0;
  }
  
  //a[0]的地址=0x16fdff2f0
  //a[0]=hello
  //a[1]的地址=0x16fdff2f8
  //a[1]=world
  
  ```


## 字符串函数

### string.h

c语言中处理字符串的函数都存放在string.h中，所以要像引用stdio.h一样

1.strlen

返回字符串的长度，用法同sizeof







2.strcmp

比较两个字符串

`int strcmp(const char *s1,const char* s2)`

s1==s2   0   :     s1>s2  1   :     s1<s2   -1

```c
#include<stdio.h>

int main(void){
    char a[]="hello";
    char b[]="hello";
    printf("a的地址=%p\nb的地址=%p\n",a,b);
    return 0;
}

//如果用数组来定义字符串，即使字符相同，也不会放在头一个地址上
//a的地址=0x16fdff304
//b的地址=0x16fdff2fc
```

大于小于的定义，字符串中每个字符的ASCII码大小的比较，从第一个字符开始按顺序做比，最后得出的值是s1与s2第一个不同的字符的ASCII码的值

```c
#include<stdio.h>
#include<string.h>


int main(void){
    char a[]="abc";
    char b[]="cac";
    printf("a与b的差值=%d\n",strcmp(a,b));
    printf("'a'与'c'的差值=%d\n",'a'-'c');
    return 0;
}

//a与b的差值=-2
//'a'与'c'的差值=-2
```

3.strcopy

`strcpy(dst,src)`

把src的字符串拷贝到dst中，返回dst

src和dst不能重合

经典用途：复制一个字符串

`char *dst=(char*)malloc(strlen(src)+1) `    先动态分配一块内存，命名为dst

`strcpy(dst,src)`



4.strchr\strrchr

​	1.strchr

​	`char *strchr(const char *s,int c)`

​	返回的是指针，表示在字符串*s中c从左往右第一次出现的位置

​	2.strrchr

​	`char *strchr(const char *s,int c)`

​	返回的是指针，表示在字符串*s中c从右往左第一次出现的位置

```c
#include<stdio.h>
#include<string.h>


int main(void){
    char a[]="hello";
    char *p=strchr(a,'l');
    //找第一个l的位置
    printf("l位于字符串中第%ld个\n",strchr(a,'l')-a+1);
    printf("第一个l的地址为%p\n",p);
    char *s=strchr(p+1,'l');
    //找第二个l的地址
    printf("第二个l的地址为%p\n",s);
    
    return 0;
}

//l位于字符串中第3个
//第一个l的地址为0x16fdff306
//第二个l的地址为0x16fdff307

```



5.strstr/strcasestr

`strstr(char *s1,char *s2)`

在字符串中找字符串

`strcasestr(char *s1,char *s2)`

在寻找时忽略大小写







# week11

## 枚举

enum

定义一串同类的常量

enum 枚举的名字{name1,name2,...name n}

大括号中名字的类型为int，值依次从0到n



## 结构

struct

结构中的每个名字的类型为int，同样具有地址

```c
#include<stdio.h>

int main(){
    //函数内部声明，本地变量，别的函数不能使用
    struct date{
        int month;
        int day;
        int year;
    };
    //声明结构变量 today
    struct date today;

    today.day=01;
    today.month=10;
    today.year=2024;
    int *p=&today.day;

    printf("today is %i %i %i \n",today.day,today.month,today.year);
    printf("today.day 的地址=%p\n",&today.day);
    printf("%p\n",p);
    return 0;
}
// today is 1 10 2024 
// today.day 的地址=0x16d4c6da4
// 0x16d4c6da4
```

可以同时声明结构和变量

```c
struct date{
  int day;
  int moth;
}today,next_day;

//其中date就是结构的名字，today和next_day就是该结构的两个变量，结构可以没有名字
```

结构初始化

```c
struct date{
  int day;
  int month;
  int year;
};
//1.按顺序赋值
struct date today={07,09,2024};
//2.指定赋值,未指定的值赋0
struct date today={.day=09,.year=2024};

```

结构用.来访问成员

### 结构运算

对于整个变量，可以做到赋值、取地址、也可以传参

 ```c
 //1.赋值
 p1=(struct point){5,10};
 //p1.x=5,p1.y=10
 p1=p2;
 //p1.x=p2.x,p1.y=p2.y
 
 ```

取地址操作

```c
#include<stdio.h>

int main(){
    struct date
    {
        int day;
        int month;
        int year;
    };
    struct date today={07,10,2024};
  //1.取整个结构的地址，用sturct date *p
    struct date *p=&today;
  //2.取结构中某个参数的变量，用int *p
    int *q=&today.month;
    printf("today的地址%p\n",p);
    printf("today.day的地址%p\n",q);

    
    return 0;
}
// today的地址0x16b1feda0
// today.day的地址0x16b1feda4
```

**结构作为函数的参数**

==注意==

​	当结构作为函数的参数传入时，并没有将原本的结构传入，而是在函数中重新创建一个新结构，并将传入的结构参数赋值，因此，在函数中对结构进行操作并不会改变原结构的值

​	因此，可以在函数中创建一个结构，并最终返回的就是这个结构

```c
#include<stdio.h>
struct point
    {
        int x;
        int y;
    }p;
void get_struct(struct point p);
struct point get_struct_pro(void);
int main(){
    
    struct point q;
    
    get_struct(p);
    printf("%d %d\n",p.x,p.y);
    
    q=get_struct_pro();
    printf("%d %d\n",q.x,q.y);
    return 0;
}
void get_struct(struct point p){
    printf("请输入");
    scanf("%d %d",&p.x,&p.y);
    printf("%d %d\n",p.x,p.y);
}
struct point get_struct_pro(void){
    struct point p;
    printf("请输入");
    scanf("%d %d",&p.x,&p.y);
    return p;
}

// 请输入1 2
// 1 2
// 0 0
// 请输入4 5
// 4 5
```



**没有直接的方式可以一次scanf一个结构**





**传入结构的指针**

通过指针访问结构变量数据的方法   -> 运算符



```c 
#include<stdio.h>


int main(){
    struct point
    {
        int x;
        int y;
    }p;

    struct point *q=&p;
    p.x=4;
    p.y=5;
    
    printf("p.x=%d\n",q->x);

}
// p.x=4
```

### 结构指针

通过传入指针的方法，可以对原始的结构进行操作

```c
#include<stdio.h>
struct point
    {
        int x;
        int y;
    }p;
//函数前有* 返回的是结构的指针
struct point *get_struct(struct point *);
int main(void){
    
    struct point q={4,5};
  //使用时按照指针的用法取值
    printf("q.x=%d\n",get_struct(&q)->x);

}
struct point *get_struct(struct point *p){
    printf("请输入");
    scanf("%d %d",&p->x,&p->y);
    return p;
}

//请输入4 5
//q.x=4

```

```c
#include<stdio.h>
struct point
    {
        int x;
        int y;
    }p;

//函数前不加* 返回的就是一个完整的结构
struct point get_struct(struct point *);
int main(void){
    
    struct point q={4,5};
    //所以在使用时当做正常的结构使用
    printf("q.x=%d\n",get_struct(&q).x);

}
struct point get_struct(struct point *p){
    printf("请输入");
    scanf("%d %d",&p->x,&p->y);
    return *p;
}

//请输入4 5
//q.x=4
```



### 结构数组

`struct date daten[100];`

表示date为一个结构数组，date中含有100个结构，每一个都与date结构相同

`struct date daten[]={{1,2,3},{4,5,6}}`

未初始化的结构赋值为0

  ```c
  #include<stdio.h>
  
  struct point get_struct(struct point *);
  int main(void){
      
      struct date {
          int day;
          int month;
          int year;
      };
      struct date daten[100];
      daten[0]=(struct date){1,2,3};
      printf("daten[0].day=%d\n",daten[0].day);
      printf("daten[99].day=%d\n",daten[99].month);
      return 0;
  
  }
  //daten[0].day=1
  //daten[99].day=1876947728
  ```

### 结构嵌套

结构中的结构

```c
#include<stdio.h>

struct point get_struct(struct point *);
int main(void){
    
    struct point{
        int x;
        int y;
    };
    
  	//结构中包含另外的结构
    struct rectangle{
        struct point p1;
        struct point p2;
        
    };
    
    struct rectangle r;
    r.p1.x=1;
    r.p1.y=2;
    r.p2.x=3;
    r.p2.y=5;
    
    
    //通过地址访问
    struct rectangle *s=&r;
    printf("r.p1.x=%d\n",s->p1.x);
    
    
    return 0;

}
```



   # week12



## 联合

### 自定义数据类型

**1.typedf**

typedef用来声明一个已有的数据类型 ==第一个是原来的类型，第二个是新名字==

`typedef int Length`

在后面的代码中，Length就相当于是int，可以用Length来定义int类型参数   

typedef也可以用来给struct命名

```c
typedef struct{
  int x;
  int y;
}point;
//相当于有一个叫point的struct
struct point{
  int x;
  int y;
};
```

**2.union**

​	union中的参变量共用同一块空间，因此对其中一个参数赋值，另一个也会是这个值，而由于系统原因，数据会从低位开始存储，因此，ch[0]对应最低位，ch[3]对应最高位

```c
#include<stdio.h>


int main(void){
    
    typedef union{
        int i;
        char ch[sizeof(int)];
    }CHI;
    CHI chi;
    chi.i=1234;
    for (int cnt=0;cnt<4;cnt++){
        printf("%x\n",chi.ch[cnt]);
    }
    return 0;

}

//ffffffd2
//4
//0
//0

```



# week13

## 可变数组



# week14

## 链表

在链表中，数据分为两部分，一部分存放数据，另一部分存放指针，指向下一块存储的区域   

   ```c
   #include<stdio.h>
   #include<stdlib.h>
   
   typedef struct node
   {
       int value;
       struct node * next;
   }Node;
   
   int main(void){
       Node *Head=NULL;
       int number;
       do{
           printf("请输入一个数字");
           scanf("%d",&number);
           Node *p=(Node*)malloc(sizeof(Node));
           p->next=NULL;
           p->value=number;
           Node *last=Head;
           
           if(last!=NULL){
               while(last->next){
                   printf("%p",last->next);
                   last=last->next;
               }
               last->next=p;
           }else{
               Head=p;
           }
       }while(number!=-1);
       return 0;
   }
   ```

![image-20240910142440231](/Users/wangtian/Library/Application Support/typora-user-images/image-20240910142440231.png)

1.链表的添加 （add）

```c
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node * next;
}Node;
typedef struct _list{
    Node *head;
}List;

void add(int number,List *list);
void print(List *list);
int main(void){
    List list;
    list.head=NULL;
    int number;
    
    do{
        printf("请输入一个数字");
        scanf("%d",&number);
        //传入的是list的指针，如果list中只有head，则与直接传入head的指针作用相同，
        //但是好处在于在之后如果想要添加新的元素会很方便
        add(number,&list);
    }while(number!=-1);
    //链表遍历
    print(&list);
    return 0;
}

//第一个函数，用来给链表添加元素
void add(int number,List *list){
    Node *p=(Node*)malloc(sizeof(Node));
    p->next=NULL;
    p->value=number;
    Node *last=list->head;
    
    if(last!=NULL){
        while(last->next){
            last=last->next;
        }
        last->next=p;
    }else{
        list->head=p;
    }
    
}
//第二个函数，用来给输出链表中所有的值
void print(List *list){
    Node *p;
    for(p=list->head;p;p=p->next){
        printf("%d \t",p->value);
    }
}
//
//请输入一个数字1
//请输入一个数字23
//请输入一个数字5
//请输入一个数字-1
//1     23     5     -1

```



2.链表的搜索

```c
NOde *p;
for(p=list->head;p;p=p->next){
  if(p->value==number){
    printf("有")
  }
}
```



3.链表的删除

![image-20240911195041351](/Users/wangtian/Library/Application Support/typora-user-images/image-20240911195041351.png)

因为目前是单向列表，所以下一个的p没有上一个p的指针，所以此时要引入新的Node *q，让q指向需要删除的值的上一个p  

```c
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node * next;
}Node;
typedef struct _list{
    Node *head;
}List;

void add(int number,List *list);
void print(List *list);
void  del(List *list,int number);
int main(void){
    List list;
    list.head=NULL;
    int number;
    
    do{
        printf("请输入一个数字");
        scanf("%d",&number);
        //传入的是list的指针，如果list中只有head，则与直接传入head的指针作用相同，
        //但是好处在于在之后如果想要添加新的元素会很方便
        add(number,&list);
    }while(number!=-1);
    //链表遍历
    print(&list);
    del(&list,3);
    print(&list);
    return 0;
}

//第一个函数，用来给链表添加元素
void add(int number,List *list){
    Node *p=(Node*)malloc(sizeof(Node));
    p->next=NULL;
    p->value=number;
    Node *last=list->head;
    
    if(last!=NULL){
        while(last->next){
            last=last->next;
        }
        last->next=p;
    }else{
        list->head=p;
    }
    
}
//第二个函数，用来给输出链表中所有的值
void print(List *list){
    Node *p;
    for(p=list->head;p;p=p->next){
        printf("%d \t",p->value);
    }
    printf("\n");
}

//删除链表中的元素
void  del(List *list,int number){
    Node *p;
    Node *q=NULL;
    for(p=list->head;p;p=p->next){
        if(p->value!=number){
            q=p;
        }else{
          //当变量出现在箭头左侧时，一定要考虑到变量是否可能为NULL的情况
          if(q){  
          	q->next=p->next;
            free(p);
            p=q->next;
          }else{
            list->head->next=p->next;
            free(p);
              
          }
        }
    }
}

//请输入一个数字1
//请输入一个数字2
//请输入一个数字3
//请输入一个数字-1
//1     2     3     -1
//1     2     -1

```



# week 15

## 全局变量

​	在main函数外声明的变量，各个函数中都能使用

​	在函数内可以重新定义与全局变量重名的变量，更小地方的变量会顶替全局的变量，在函数中也是这样，if内的变量可以顶替main中的变量

## 静态本地变量

### static

​	在本地变量定义时加上static修饰符就会变成静态本地变量，在函数离开后，静态本地变量会保持最后的值，并不会在函数调用后重新初始化。

==只有在第一次会进行初始化==

```c		
#include <stdio.h>

int f(void);
int main(void){
    f();
    f();
    f();
}

int f(void){
    static int a=1;
    a+=2;
    printf("%d\n",a);
    return a;
}

//3
//5
//7

```

静态本地变量的地址与全局变量位于相同的内存区域，与本地变量地址不同，但作用域仍是本地

==不能传本地变量的指针==

在离开函数后，如果再次定义本地变量，会在相同地址重新赋值

![image-20240911200808161](/Users/wangtian/Library/Application Support/typora-user-images/image-20240911200808161.png)

所以，返回本地变量的地址，供其他函数继续使用是有风险的

但可以返回全局变量和静态本地变量，因为他们所在的内存区域不会被重新给其他变量使用



# week16

## 编译预处理指令

### #define

用来定义一个宏，相当于const

所有宏会在编译预处理阶段替换成它所代表的值

1.没有值的宏

·# define ——DEBUG

这类宏用于条件编译





2.预定义的宏

__ LINE __  :显示代码行号

__ FILE __：文件名

__ DATE__：日期



3.带参数的宏

​	`# define cube(x)   ((x)*  (x)*  (x))`

第一个括号中的x为输入的值，第二个括号为最后输出的值

```c
#include<stdio.h>
#define cube(x)((x)*(x)*(x))
int main(){
  //cube中的x会用5替换，整体的cube(x)用第二个括号中的值进行替换
  printf("%d",cube(5));
  return 0;
}
```

4.在定义带参数的宏的时候不要在宏后面加；

5.inline函数，宏plus



# week17

## 大程序

​	多个.c文件

​	头文件

​	将函数原型放到一个头文件(.h)中，在需要调用这个函数的源代码中#include这个头文件

​	<>和""的区别，<>是在编译库的标准库中找，""是优先在当前目录里找

​	对任何.c文件都应有对应的.h文件，要将所有公开的函数原型和全局变量的声明放入，全局变量可以在多个.c中通用

​	在函数前面加上static可以使它成为只能在所在编译单元(当前.c)中被使用的函数，全局变量同理

![image-20240912141545635](/Users/wangtian/Library/Application Support/typora-user-images/image-20240912141545635.png)

​	全局变量的声明 extern

`extern int gAll`

变量的定义 ：`int a`

变量的声明：`extern int a`

​	==只有声明可以被放在.h中==，如果将定义放到.h中，如果有多个文件多次引用同一个.h，会导致重复定义

![image-20240912142141709](/Users/wangtian/Library/Application Support/typora-user-images/image-20240912142141709.png)

所以，在.h中会产生如下几个宏(标准头文件结构)

 `#ifndef __MAX_H_`

`#define __MAX_H_`

`#endif __MAX_H_`

来确保不会重复定义

 	

# week18

## 函数指针

​	函数名就代表了存放函数的地址，可以用相同类型的函数去构建一个指向函数的指针

```c
#include <stdio.h>

void f(void){
    
}
int main(void){
    //第一个void代表函数返回的类型，第二个括号中应该存放需要输入的参数
    void(*p)(void)=f;
    printf("f函数的地址=%p\n",f);
    printf("p的地址   =%p\n",p);
    return 0;
}
//f函数的地址=0x100003efc
//p的地址   =0x100003efc

```



