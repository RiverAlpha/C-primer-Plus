// 如果编译器不识别%zd,尝试换成%u或%lu
#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extrodinary being!"
int main(){
    char name[40];

    printf("What's your name?");
    scanf("%s",name);
    printf("Hello, %s. %s\n",name,PRAISE);
    //printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof(name));
    //printf("The phrase of praise has %zd letters", strlen(PRAISE));
    //printf("And occupise %zd memory cells.\n",sizeof PRAISE);
	printf("Your name of %d letters occupies %d memory cells.\n",strlen(name),sizeof(name));
    printf("The phrase of praise has %d letters", strlen(PRAISE));
    printf("And occupise %d memory cells.\n",sizeof PRAISE);
    return 0;
}