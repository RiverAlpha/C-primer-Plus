// 用户自定义输出函数
#include<stdio.h>
void put1(const char *);
int put2(const char *);
int main(){
    put1("If I'd as much money");
    put1(" as I could spend,\n");
    printf("I count %d characters.\n",put2("I never would cry old chairs to mend."));
    return 0;
}
void put1(const char * string){
    while (*string != '\0')
    {
        putchar(*string++);
    }
}
int put2(const char *string){
    int count = 0;
    while (*string != '\0')
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;
}