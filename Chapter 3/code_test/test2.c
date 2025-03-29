// 提示输入一个ascii码值 并打印对应字符
#include<stdio.h>
int main(){
    int ch;
    printf("Enter a number please from -127 to 128:");
    scanf("%d",&ch);
    printf("The ascii characotr is:");
    printf("%c\n",ch);
    return 0;
}