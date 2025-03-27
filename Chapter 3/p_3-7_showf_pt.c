//以两种方式显示float类型的值
#include<stdio.h>
int main(){
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n",aboat,aboat);
    // 下一行要求编译器支持C99或其中的相关特性
    //%a 用于以 ​十六进制科学计数法 表示浮点数（float/double）
    printf("And it's %a in hexadecimal, powerss of 2 notation\n", aboat);
    printf("%f can be written %e\n",abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);
    return 0;
}