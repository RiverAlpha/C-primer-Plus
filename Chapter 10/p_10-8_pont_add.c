// 指针地址
#include<stdio.h>
#define SIZE 4

int main(){
    short dates[SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;
    pti = dates; //把数组地址赋给指针
    ptf = bills;
    printf("%23s %15s\n","short","double");
    for(index = 0;index <SIZE;index++){
        printf("pointers + %d: %10p %10p\n",index,pti+index,ptf+index);
    }
    if(dates + 2 == &dates[2]){
        printf("dates + 2 == &dates[2]\n");
        printf("&dates[2] = %p\n",&dates[2]);
    }
    if(*(dates +2) == dates[2]){
        printf("*(dates +2) == dates[2]\n");
        printf("*(dates +2) = %d",*(dates +2));
    }

    return 0;
}



/*
                  short          double
pointers + 0: 000000000061FE00 000000000061FDE0
pointers + 1: 000000000061FE02 000000000061FDE8
pointers + 2: 000000000061FE04 000000000061FDF0
pointers + 3: 000000000061FE06 000000000061FDF8

指针加一表示增加一个存储单元 而不是下一个字节的地址
这就是为什么必须声明指针所指向对象类型的原因之一

因为计算机要知道存储对象需要多少字节（即使指针指向的是标量变量，也要知道变量的类型
否则*pt就无法正确的取回地址上的值）

dates + 2 == &dates[2]  //相同的地址
*(dates +2) == dates[2] //相同的值

*/