// 自定义输出形式（类似于puts() 但是不会自动添加换行符的函数）
#include<stdio.h>
void put1(const char * string){
    while (*string != '\0')
    {
        putchar(*string++);
        //++ 优先级大于*
    }
}
void main(){
    put1("aaaaaaaaaaaaaaaaaa");
    printf("ssssssssssssss");
}