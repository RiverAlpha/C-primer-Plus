## 类型1
```C


double rate[5] = {1,2,3,4,5}
const double *pd = rate;
// 这个指针定义表示不能使用pd来改变它所指向的值 比如*pd = 12 or pd[2] = 1
//但是pd本身的值（存储的地址的值是可以改变的）
pd = &rate[4]
//该类型的指针可以指向（存储地址）非const类型或者const类型的数组地址
const double locked[5] = {1,2,3,4,5}
pd = locked

//但是如果pd为非const类型 不可以指向const类型的数组地址
double *pd = rate;  //合法
pd = locked //无效





```
## 类型2
```C
double rate[5] = {1,2,3,4,5}
double *const pc = rate;

//该声明方式表达 pc的指向（存储的地址）不可改变，但是可以通过pc改变所指向的值
pc = &rate[2] //不合法
pc[2] = 23.6 //合法
```

## 类型3
```C
double rate[5] = {1,2,3,4,5}
const double *const pc = rate;
//该声明表示 既不可以改变pc的指向（存储的地址）也不可以改变所指向的值

```