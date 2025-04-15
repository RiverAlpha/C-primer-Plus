// 返回数组最大值下标
#include<stdio.h>
int max(double arr[],int n){
    double max_i = 0;
    int max = arr[0];
    for (int i = 0; i < n; i++)
        if (max < arr[i])
        {
            max = arr[i];
            max_i = i;
        }
        
    return max_i;
}
void main(){
    double source[6] = {1.1,2.2,3.3,4.4,66.6,5.5};
    printf("the max_i in source is %d\n",max(source,6));
}