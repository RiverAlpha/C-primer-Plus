#include<stdio.h>
void copy_arr(double target1[],double source[], int n);
void copy_ptr(double *target2,double *source, int n);
void copy_ptrs(double *target3,double *source_start, double *source_end);
void show_arr(double [],int n);
void main(){
    double source[5] = {1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1,source,5);
    show_arr(target1,5);
    copy_arr(target2,source,5);
    show_arr(target2,5);
    copy_ptrs(target3,source,source+5);
    show_arr(target3,5);
}
void copy_arr(double target1[],double source[], int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        target1[i] = source[i];
    }
}
void copy_ptr(double *target2,double *source, int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        *(target2+i) = *(source+i);
    }
}
void copy_ptrs(double *target3,double *source_start, double *source_end){
    while (source_start<=source_end)
    {
        *target3 = *source_start;
        target3 = target3 +1;
        source_start = source_start+1;
    }
}
void show_arr(double arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%.3f\t",arr[i]);
    }
    printf("\n");
}
/*
1.100   2.200   3.300   4.400   5.500
1.100   2.200   3.300   4.400   5.500
1.100   2.200   3.300   4.400   5.500
*/