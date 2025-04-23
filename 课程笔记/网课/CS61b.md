# CS61b

# day1 

## defining and using class

定义类

eg.dog bark

```java
public class dog {
  //这里的类是静态的，静态类可以被直接调用而不需要实例化
    public static void makenoise(){
        System.out.println("Bark");
    }
    public static void main(String[] args) {
        dog.makenoise();

    }
}
```

当dog有了不同的种类分类，就需要先进行实例化在调用makenoise()

![image-20241219140033099](/Users/wangtian/Library/Application Support/typora-user-images/image-20241219140033099.png)

注意点1，static函数中无法引用非static量

![image-20241219140237621](/Users/wangtian/Library/Application Support/typora-user-images/image-20241219140237621.png)

```java
public class dog {
    public int weight;
    //相当于初始化__init__
    public dog(int weight){
        weight=weight;
    }
    
    public  void makenoise(){
        if (weight<10) {
            System.out.println("Bark");
        } else if (weight<30){
            System.out.println("arooooo!");
        }
    }
}

```

静态方法和非静态方法

 static 定义类属性，非static定义实例的属性

```java
public class dog {
    //实例变量
    public int weight;
    //相当于初始化__init__,constructor 类似method
    public dog(int inweight){
        weight=inweight;
    }
    //方法
    public  void makenoise(){
        if (weight<10) {
            System.out.println("Bark");
        } else if (weight<30){
            System.out.println("arooooo!");
        }
    }
    //静态方法
    public static dog s_compare(dog d1,dog d2){
        if (d1.weight>d2.weight){
            return d1;
        }else return d2;
    }
    //非静态
    public dog compare(dog d2){
        if (weight>d2.weight){
            return  this;
        }else return  d2;

    }


    public static void main(String[] args) {
        //创建实例
        //1.declaration
        dog d1;
        //2.instantiation,创建了新的空间，但没有赋值给任何变量，所以会销毁
        new dog(20);
        //3.declaration & instantiation
        d1=new dog(20);
        dog d2=new dog(130);
        //1.用静态方法对比
        dog d=dog.s_compare(d1,d2);
        //2.非静态
        d=d1.compare(d2);
        

    }
}

```

