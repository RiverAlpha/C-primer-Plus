// 打印字符串，并统计打印的字符数
#include<stdio.h>
int put2(const char * string){
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;
}
void main(){
    int count = 0;
    count = put2("abcdefghijklmnopqrstuvwxyz");
    printf("总共%d个字符\n",count);
}