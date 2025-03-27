// your weight in platinum
#include<stdio.h>
int main(){
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("let's check it out.\n");
    printf("Please enter your weight in pounds:");

    //获取用户的输入
    scanf("%f",&weight);
    //假设白金的价格是$1700每盎司
    //14.5833用于把英镑常衡盎司转换为金衡盎司
    value = 1700 * weight * 14.5833;
    printf("Your weigth in platinum is worth %.2f.\n",value);
    printf("You are easily worth that! if platinum drop,\n");
    printf("Eat more to maintain your value.\n");
    return 0;
}