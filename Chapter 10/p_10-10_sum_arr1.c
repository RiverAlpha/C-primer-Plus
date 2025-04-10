// 声明数组形参
/*
由于函数原型可以省略参数名，所以以下四种原型都是等价的
int sum(int *ar,int n);
int sum(int *,int);
int sum(int ar[],int n);
int sum(int [],int);

但是，在函数定义中不能省略参数名，下面两种星噬的函数定义等价
int sum(int *ar,int n){
    //code
}

int sum(int arp[],int n){
    // code
}

*/

// 数组元素之和
#include<stdio.h>
#define SIZE 10
int sum(int ar[],int n);
int main(){
    int marbels[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;

    answer = sum(marbels,SIZE);
    printf("The total number of marbels is %ld.\n",answer);
    printf("The size of marbels is %zd bytes.\n",sizeof marbels);
    return 0;
}
int sum(int ar[],int n){
    int i;
    int total = 0;
    for(i = 0;i<n;i++){
        total +=ar[i];
    }
    // 数组作为函数参数时会退化为指针，此时sizeof ar 为8 而不是数组大小40
    printf("The size of ar is %zd bytes.\n",sizeof ar);
    return total;
}
