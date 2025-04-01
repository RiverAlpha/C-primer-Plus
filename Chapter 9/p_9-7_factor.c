// 使用循环和递归计算阶乘
#include<stdio.h>
long fact(int n);
long refact(int n);
int main(){
    int num;

    printf("This program calculates factories.\n");
    printf("Enter a value in the range 0-12 (q to quit):\n");
    // 输入合法返回1 不合法返回0
    //printf("%d",scanf("%d", &num));
    while (scanf("%d", &num) ==1)
    {

        if(num<0)
            printf("No negative numbers, please.\n");
        else if (num >12)
        {
            printf("Keep input under 13.\n");
        }
        else{
            printf("loop: %d factorial = %ld\n", num,fact(num));
            printf("recrusion: %d factorial = %ld\n", num,refact(num));
        }
        printf("Enter a value in the range 0-12 (q to quit):\n");
    }
    printf("Bye.\n");

    return 0;
}
long fact(int n){
    long ans;

    for (ans =1;n>1;n--){
        ans*=n;
    }
    return ans;
}
long refact(int n){
    long ans;
    if(n>0){
        return n*refact(n-1);
    }else{
        ans = 1;
    }
    return ans;
}