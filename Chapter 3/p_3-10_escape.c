//使用转义序列
#include<stdio.h>
int main(){
    float salary;

    printf("\a Enter your desired monthly salary:");
    printf(" $_____\b\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is $%.2f a year.",salary,salary*12.0);
    printf("\rGee!\n");
    return 0;
}