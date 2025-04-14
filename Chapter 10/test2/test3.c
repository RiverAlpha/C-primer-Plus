// 返回数组最大值
#include<stdio.h>
int max(int arr[],int n){
    int max = arr[0];
    for (int i = 0; i < n; i++)
        max = max<arr[i] ? arr[i]:max;
    return max;
}
void main(){
    int source[5] = {1,2,3,4,5};
    printf("the max in source is %d\n",max(source,5));
}