// 使用转换说明
#include<stdio.h>
#define PI 3.141593
int main(){
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants are %f berry pies.\n",number,pies);
    printf("The value of pi is %f.\n",PI);
    printf("Farewell! there are too dear for my possessing,\n");
    printf("%c%d\n",'$',2*cost);
    return 0;
}