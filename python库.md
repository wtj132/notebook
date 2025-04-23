# python库

## collections

功能：实现了特定目标的容器，提供python标准内建容器dict、list、set和tuple

### 1.模块类查看

collections.__ all __

![image-20240929144546531](/Users/wangtian/Library/Application Support/typora-user-images/image-20240929144546531.png)

### 2.重点模块介绍

#### 1.双向队列deque

功能：双端队列，可以从一侧追加或推出对象，deque是一个双向链表

- append()

  > 添加元素到右端

- appendleft()

  > 添加元素到左端

- Clear()

  > 删除所有元素

- Count()

  > 计数

- Extend()

  > 扩展deque的右侧，可以直接添加iterable中的元素

- Extendleft()

  > 左侧添加，iterable中的元素顺序会颠倒

- Index()

  > 返回x在deque中的位置（第一个匹配项）

- Insert(i,x)

  > 在位置i插入x

- pop()\popleft()

  > 移去并返回一个元素

- Remove(value)

  > 移除找到的第一个value

- Reverse()

  > 将deque逆序排列

- Rotate(n=1)

  > 向右移动n步

- maxlen()

  > deque的最大尺寸



## Pathlib库

```
Path.iterdir()　　#遍历目录的子目录或者文件
Path.is_dir()　　#判断是否是目录
Path.glob()　　#过滤目录(返回生成器)
Path.resolve()　　#返回绝对路径
Path.exists()　　#判断路径是否存在
Path.open()　　#打开文件(支持with)
Path.unlink()　　#删除文件或目录(目录非空触发异常)
Path.chmod()　　#更改路径权限, 类似os.chmod()
Path.expanduser()　　#展开~返回完整路径对象
Path.mkdir()　　#创建目录
Path.rename()　　#重命名路径
Path.rglob()　　#递归遍历所有子目录的文件
Path.parts　　#分割路径 类似os.path.split(), 不过返回元组
path.suffix　　　　#文件后缀
path.stem　　　　　 #文件名不带后缀
path.name　　　　　　#带后缀的完整文件名
path.parent　　　　#路径的上级目录
p = Path(r'd:\test\tt\dd')
p.mkdir(exist_ok=True)          # 创建文件目录(前提是tt目录存在, 否则会报错)
p.mkdir((exist_ok=True, parents=True) # 递归创建文件目录
p = Path(r'd:\test\tt.txt')
p.stat()                        # 获取详细信息
# os.stat_result(st_mode=33206, st_ino=562949953579011, st_dev=3870140380, st_nlink=1, st_uid=0, st_gid=0, st_size=0, st_atime=1525254557, st_mtime=1525254557, st_ctime=1525254557)
p.stat().st_size                # 文件大小
# 0
p.stat().st_ctime               # 创建时间
# 1525254557.2090347
# 其他的信息也可以通过相同方式获取
p.stat().st_mtime               # 修改时间

```

## os

>2.1 join()方法——拼接路径
>2.2 exists()方法——判断路径是否存在（准确）
>2.3 split()方法——分割路径名
>2.4 splitdrive()方法——分割驱动器和目录
>2.5 splitext()方法——分割文件名和扩展名
>2.6 dirname()方法——获取路径中的目录
>2.7 basename()方法——从一个路径中提取文件名
>2.8 abspath()方法——获取绝对路径
>2.9 isf ile()方法——判断是否为普通文件
>2.10 isdir()方法——判断是否为目录
>2.11 islink()方法——判断指定目录是否为符号链接
>2.12 commonpath()方法——提取共有的最长路径
>2.13 commonpref ix()方法——提取共有的路径前缀
>2.14 getatime()方法——获取最后一次访问路径的时间
>2.15 getmtime()方法——获取最后一次修改路径的时间
>2.16 getctime()方法——获取路径的ctime
>2.17 getsize()方法——获取路径的大小
>2.18 isabs()方法——判断是否为绝对路径
>2.19 ismount()方法——判断是否为挂载点
>2.20 normcase()方法——规范化路径名称的大小写
>2.21 normpath()方法——规范路径名称
>2.22 samef ile()方法——比较两个路径是否相同
>2.23 sameopenf ile()方法——比较两个打开的 文件描述符对象是否为同一个文件
>2.24 samestat()方法——判断两个stat元组是否指向同一个文件
>2.25 realpath()方法——获取实际路径
>2.26 relpath()方法——计算相对路径
>————————————————
>
>                            版权声明：本文为博主原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接和本声明。
>
>原文链接：https://blog.csdn.net/xw1680/article/details/142308478
