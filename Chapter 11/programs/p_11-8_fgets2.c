#include<stdio.h>
#define STLEN 10
void main(){
    char words[STLEN];
    puts("Enter strings (empty line to quit):");
    while ((fgets(words,STLEN,stdin) != NULL && words[0] != '\n'))
    {
        fputs(words,stdout);
    }
    puts("Done.");
}
/*
Enter strings (empty line to quit):
by the way, the gets() function
by the way, the gets() function
also returns a null pointer if it
also returns a null pointer if it
encounters end-off-file.
encounters end-off-file.

Done.
*/
/*
有意思的是似乎该程序处理过长>10的输入时完全没有问题，其实是无线循环起了作用，只要不连续输入换行符，输入的连续字符都会被打印出来
一开始读取By the wa(9)，并存储为By the wa\0;接着fputs打印该字符，而且并没有换行符，然后就进入下一次循环，fgets从stdin中继续读取，直到剩余的字符串被打印完成，
此时输入一个换行符（额外的），程序结束
*/
