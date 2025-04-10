// 处理数组的函数
#include<stdio.h>
#define SIZE 5
void show_array(const double arr[],int n);
void mult_arry(double arr[],int n,double mult);
int main(){
    double dip[SIZE] = {20.0,17.66,8.2,15.3,22.22};

    printf("The original dip array:\n");
    show_array(dip,SIZE);
    mult_arry(dip,SIZE,2.5);
    printf("The dip array after calling multi_array():\n");
    show_array(dip,SIZE);
    return 0;
}
void show_array(const double arr[],int n){
    int i;
    for(i = 0;i<n;i++){
        printf("%8.3f",arr[i]);
    }
    putchar('\n');
}
void mult_arry(double arr[],int n,double mult){
    int i;
    for(i = 0;i<n;i++){
        arr[i] *= mult;
    }
}