// C99/C11 标准声明
#include<stdio.h>
void main(){
    int arr[100] = {arr[99] = -1};
    int arr2[] = {arr2[99] = -1};
    printf("%d",arr[98]);
    printf("\n%d\n",arr2[98]);
}