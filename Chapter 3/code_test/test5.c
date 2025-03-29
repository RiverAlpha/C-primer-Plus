// 计算年龄 秒数
#include<stdio.h>
int main(){
    int second = 3.156e7;
    int age;
    printf("Enter your ages Please:\n");
    scanf("%d",&age);
    printf("the seconds you has been live is %d",age*second);
    //int 范围达到了21亿 相当于2e9
    return 0;
}