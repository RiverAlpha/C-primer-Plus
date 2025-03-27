// 打印类型大小
#include<stdio.h>
int main(){
    /*
    C99和C11提供 %zd转换器匹配sizeof的返回类型
    一些不支持C99 和 C11的编译器可使用%u或%lu代替%zd

    因为 VC6中所使用的编译器是C90标准的，而 long long 型是在C99中新加入的
    */
    printf("Type int has a size of %zd bytes.\n",sizeof(int));
    printf("Type char has a size of %zd bytes.\n",sizeof(char));
    printf("Type long has a size of %zd bytes.\n",sizeof(long));
    printf("Type long long has a size of %zd bytes.\n",sizeof(long long));
    printf("Type double has a size of %zd bytes.\n",sizeof(double));
    printf("Type long double has a size of %zd bytes.\n",sizeof(long double));
    return 0;
}