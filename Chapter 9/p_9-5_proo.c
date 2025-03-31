// 使用函数原型
#include<stdio.h>
int imax(int, int);
int main(){
    // wrong
    //printf("The maximum of %d and %d is %d.\n",3,5,imax(3));
    // warning C4244: 'function' : conversion from 'const double ' to 'int ', possible loss of data
    printf("The maximum of %d and %d is %d.\n",3,5,imax(3.0,5.0));
    return 0;
}
int imax(int n,int m){
    return (n > m ? n : m);
}