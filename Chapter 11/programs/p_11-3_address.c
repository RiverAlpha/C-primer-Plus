// 字符串的地址
//宏定义没有内存地址（不是变量，只是文本替换）
#define MSG "I'm special"

#include<stdio.h>
int main(){
    char ar[] =  MSG;
    const char *pt = MSG;
    printf("address of \"I'm special\":%p \n","I'am special");
    printf("            address ar: %p\n",ar);
    printf("            address pt: %p\n",pt);
    printf("           address of MSG: %p\n",MSG);
    printf("address of \"I'm special\": %p \n","I'am special");
    return 0;
}
/*
address of "I'm special":000000000040400C 
            address ar: 000000000061FE0C
            address pt: 0000000000404000
           address of MSG: 0000000000404000
address of "I'm special": 000000000040400C 
*/

/*

可以看到pt和MSG指针的值是一样的（指向的地址一致）
而与ar不一样 这是因为字符串和字符数组存储方式不一样
ar是一个字符数组，初始化时会拷贝字符串字面量“I'm special”的内容（包括终止符\0）到数组的内存中
ar的地址是字符串自身的地址，与字符串字面量的地址无关

其次数组名ar是地址常量不能自身进行运算 如自增（改变自身的值）
编译器把数组名ar识别为该数组元素的首元素地址&ar[0]的别名 所以这里ar表示为地址常量
但是数组的元素是变量 可以进行ar[7] = 'L'
但是指针是变量可以改变自身的值
*/