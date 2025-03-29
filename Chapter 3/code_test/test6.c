//计算身高
#include<stdio.h>
int main(){
    float length = 2.54;
    float hight;
    printf("Enter your hight please:\n");
    scanf("%f",&hight);
    printf("Your hight with cm is %f cm",length*hight);
    return 0;
}