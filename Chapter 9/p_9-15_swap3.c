// 使用指针解决交换函数的问题

#include<stdio.h>
void interchange(int *u,int *v);

int main(){
    int x=5,y=10;
    printf("Originally x = %d and  y = %d.\n",x,y);
    interchange(&x,&y);
    printf("Now x = %d and  y = %d.\n",x,y);
    return 0;
}
void interchange(int *u,int *v){
    int temp;
    temp = *u;
    *u=*v;
    *v = temp;
}
/*
Originally x = 5 and  y = 10.
Now x = 10 and  y = 5.

remember! 
1. u的值是&x,所以指向x 这表示*u即表示x的值
2. 交换的不是x的地址 而是x的值

interchange表示将该地址的变量传入函数中并进行交换
*/