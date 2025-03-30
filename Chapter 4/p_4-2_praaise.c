// 使用不同类型的字符串
#include<stdio.h>
#define PRAISE "You are an extrodinary being!"
int main(){
    char name[40];

    printf("What's your nama?");
    scanf("%s",name);
    printf("Hello, %s. %s\n",name,PRAISE);
    return 0;

    /*
    What's your nama?Angela Plains
    Hello, Angela. You are an extrodinary being!

    1.scanf函数在遇到第一个空格的时候就停止了
    2.字符数组在输入时不需要&取地址符号
    */
}