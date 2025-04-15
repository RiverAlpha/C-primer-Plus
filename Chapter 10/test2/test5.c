// 返回数组最大值与最小值的差值
#include<stdio.h>
double differences(double arr[],int n){
    double max,min;
    max = min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }else if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
    return max-min;
    
}
void main(){
    double source[6] = {1.1,0.2,3.3,4.4,66.6,5.5};
    printf("the defferences beteween max and min in source is %.3f\n",differences(source,6));
}