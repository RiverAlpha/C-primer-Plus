// covert
#include<stdio.h>
int main(){
    float cup_counts;
    printf("Enter counts of cup:\n");
    scanf("%f",&cup_counts);
    printf("转换为%f大汤勺",cup_counts/3);
    printf("转换为%f盎司",cup_counts/3/2);
    printf("转换为%f杯",cup_counts/3/2/8);
    printf("转换为%f品脱",cup_counts/3/2/8/2);
    return 0;
}