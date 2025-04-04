#include<stdio.h>
double mean_cal(double n,double m){
    return 1/((1/n+1/m)/2);
}
void main(){
    printf("%f",mean_cal(3.0,4.0));
}