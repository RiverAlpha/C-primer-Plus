//把年龄换成天数 不考虑闰年
#include<stdio.h>
int main(){
    int age = 24;
    int days = 365;
    printf("I am %d years old(%d days)",age,days*age);

    return 0;
}