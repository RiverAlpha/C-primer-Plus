// 字段宽度
#include<stdio.h>
#define PAGES 959
int main(){
    printf("*%d*\n",PAGES);
    //字段自动扩充到以符合整数的长度
    printf("*%2d*\n",PAGES);
    //向前补空格
    printf("*%10d*\n",PAGES);
    //向后补空格
    printf("*%-10d*\n",PAGES);
    return 0;
}