// 倒序排列数组
#include<stdio.h>
// 函数调用数组时 数组会退化为指针
void reverse_arr(double a[],int n){
    double  temp;
    
    for (int i = 0; i < n/2; i++)
    {
        temp = a[n-i-1];
        a[n-i-1] = a[i];
        a[i] = temp;
    }
}
void main(){
    double source[7] = {1.1,0.2,3.3,4.4,66.6,5.5,100.9};
    reverse_arr(source,7);
    for (int i = 0; i < 7; i++)
    {
        printf("%.3f\t",source[i]);
    }
}