// 一些浮点修饰符的组合
#include<stdio.h>
int main(){
    const double RENT = 3852.99;

    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    //四舍五入
    printf("*%3.1f*\n",RENT);
    //加上小数点和向前补空格和向后补零总共10个符号
    printf("*%10.3f*\n",RENT);
    //加上小数点和E和向前补空格和向后补零总共15个符号
    printf("*%15.3E*\n",RENT);
    //位宽小于总共字符数会展示完整
    printf("*%+4.2f*\n",RENT);
    printf("*%09.2f*\n",RENT);
    //向前补0
    printf("*%010.2f*\n",RENT);
    return 0;
}