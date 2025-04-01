// 设计一个函数，接受三个参数：一个字符和两个整数。字符参数是待打印的字符，第一个整数指定一行中打印字符的次数，第二个整数指定打印字符的行数；
#include<stdio.h>
void main(){
    void printC(char,int,int);

    int line_count = 5;
    int char_count = 6;
    char ch = '%';
    printC(ch,line_count,char_count);
}

void printC(char ch,int x,int y){
    for(int i = 0;i<x;i++){
        for(int j = 0;j<y;j++){
            printf("%c",ch);
        }
        putchar('\n');
    }
}
/*
%%%%%%
%%%%%%
%%%%%%
%%%%%%
%%%%%%
*/