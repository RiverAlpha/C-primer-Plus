// 显示字符的代码编号
#include<stdio.h>
#include<limits.h>
int main(){
    char ch;
    
    printf("Please enter a character.\n");
    scanf("%c",&ch);
    printf("The code for %c is %d.\n",ch,ch);
    // 根据编译器不同有的char范围是-128~127 有的把char实现为无符号类型 范围为0~255
    // 对于有符号类型 -128 编码为1000 0000。 127 解释为 0111 1111

    printf("signed char 范围: %d ~ %d\n", SCHAR_MIN, SCHAR_MAX);   // -128 ~ 127
    printf("unsigned char 范围: 0 ~ %u\n", UCHAR_MAX);             // 0 ~ 255
    return 0;
}