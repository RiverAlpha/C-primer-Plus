// 找出两个整数中较小的一个
#include<stdio.h>
int main(){
    // 初始化函数可以放入主函数中
    int imin(int,int);
    int evil1,evil2;

    printf("Enter a pair of integers (q to quit):\n");

    while (scanf("%d %d",&evil1,&evil2) == 2)
    {
        printf("The lesser of %d and %d is %d.\n",
            evil1,evil2,imin(evil1,evil2));
        printf("Enter a pair of integers (q to quit):\n");
    }
    printf("Bye.\n");
    return 0;
}
// 函数定义的时候不能缺少形参名称
int imin(int n,int m){
    int min;

    if(n<m){
        min = n;
    }else{
        min = m;
    }
    return min;
}