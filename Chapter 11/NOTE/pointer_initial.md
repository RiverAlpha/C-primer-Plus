```C
char *name
scanf("*s",name)
```
以上写法是错误的，指针初始化未分配存储空间的时候是不允许直接用的，初始化的时候指向的地址是随机的，第二行强行进行使用可能导致擦除其他空间的数据

```C
char name[81]
```
不同于指针的性质，可以直接使用数组的初始化，最简单的方法就是显式声明数组的大小