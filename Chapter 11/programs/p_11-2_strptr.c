#include<stdio.h>
#include<string.h>
void test(){
    const char m1[] = {'q','q','w','r'};
    printf("%d",strlen(m1));
    for (int i = 0; i < 10; i++)
    {
        putchar(m1[i]);
    }
    
}
int main(){
    /*
    字符串常量 "are" 实际上是一个字符数组，存储在内存的只读区域（如 .rodata 段）。
    "are" 的类型是 const char*（指向字符的指针），它的值就是 'a' 的地址。
    %p 用于打印指针的值（即地址），所以 printf("%p", "are") 会输出 'a' 的内存地址。

    %c 对应 *"space farers"
    *"space farers" 解引用字符串首字符 's'，%c 输出字符 s。
    */
    printf("%s, %p,%c\n","We","are",*"space farers");
    test();
    return 0;
}
/*
We, 0000000000404000,s
*/