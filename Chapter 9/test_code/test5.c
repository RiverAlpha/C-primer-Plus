#include<stdio.h>
void large_of(double *n,double *m){
    if (*n>=*m)
    {
        *m = *n;
    }else{
        *n = *m;
    }
}
void main(){
    double m = 3.0;
    double n = 4.0;
    large_of(&m,&n);
    printf("m = %f  n = %f",m,n);
}