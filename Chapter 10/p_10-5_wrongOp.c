#include<stdio.h>
#define SIZE 5
int main(){
    int oxen[SIZE] = {5,3,2,8};
    int yaks[SIZE];

    //wrong
    //yaks = oxen;


    // 数组下标越界
   // yaks[SIZE] = oxen[SIZE];

    // 不起作用
    //yaks[SIZE]  = {5,3,2,8};
    return 0;
}