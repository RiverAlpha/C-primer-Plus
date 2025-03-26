//一个文件中包含两个函数
#include<stdio.h>
// 函数原型 prototype
void butler(void);
int main(){
    printf("I will summon the butler function.\n");
    //函数调用 function call
    butler();
    printf("Yes! Bring me some tea and writeable DVDs.\n");
    return 0;
}
//函数定义 function definition
void butler(void){
    printf("You rang, sir?\n");
}