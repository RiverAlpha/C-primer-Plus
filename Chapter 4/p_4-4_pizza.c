// 在披萨饼程序中使用已定义的常量
#include<stdio.h>
#define PI 3.14159
int main(){
    float area, circum,radius;
    printf("What is the radius of your pizza?\n");
    scanf("%f",&radius);
    area = PI * radius *radius;
    circum = 2.0 *PI*radius;
    printf("Your basic pizza parameters are as following:\n");
    printf("circumference = %1.2f, area = %1.2f\n",circum,area);
    return 0;
}