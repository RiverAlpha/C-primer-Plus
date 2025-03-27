//十进制，八进制，十六进制打印十进制数100
#include<stdio.h>
int main(){
    int x = 100;
    printf("dec = %d; octal = %o; hex=%x\n",x,x,x);
    //如果要在八进制和十六进制前面显示0和0x前缀，分别需要在转换说明中加入#
    printf("dec = %d; octal = %#o; hex=%#x\n",x,x,x);
    return 0;
}