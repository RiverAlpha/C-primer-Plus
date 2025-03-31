#include<stdio.h>
#define SIZE 50
int main(){
    float list[SIZE];

    readList(list,SIZE);
    sort(list,SIZE);
    avrage(list,SIZE);
    bargraph(list,SIZE);
    return 0;
}
/*
四个待实现的函数
*/