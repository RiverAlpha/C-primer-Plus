// 数组元素之和
#include<stdio.h>
#define SIZE 10
int sum(int* start,int* end);
int main(){
    int marbels[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;

    answer = sum(marbels,marbels+SIZE);
    printf("The total number of marbels is %ld.\n",answer);
    printf("The size of marbels is %zd bytes.\n",sizeof marbels);
    return 0;
}
int sum(int* start,int* end){

    int total = 0;
    while (start<end){
        // total += *start;
        // start++;
        total += *start++;  
        //1. start++ 先返回start的值 然后自增
        //2. *(start++) 解引用start++返回的指针start[0]
        //3. 。。。
    }

    return total;
}