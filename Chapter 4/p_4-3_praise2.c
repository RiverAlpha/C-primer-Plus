// 如果编译器不识别%zd,尝试换成%u或%lu
#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinary being."
int main(){
    char name[40];

    printf("What's your name?");
    scanf("%s",name);
    printf("Hello, %s. %s\n",name,PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof(name));
    printf("The phrase of praise has %zd letters", strlen(PRAISE));
    printf("And occupise %zd memory cells.\n",sizeof PRAISE);
    return 0;

    /*
    string.h中包含函数strlen()
    上一章学到 %d为sizeof运算符提供了%zd的转换方式 在这里对strlen()函数也适用
    */
}