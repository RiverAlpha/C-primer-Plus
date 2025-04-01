// 设计一个函数返回两个double类型中较小的那个值
#include<stdio.h>
double min(double,double);
void main(){
    double x = 1.2;
    double y = 10.9;
    printf("The min of %f and %f is %f\n",x,y,min(x,y));
}
double min(double a,double b){
    return a>b ? b:a;
}