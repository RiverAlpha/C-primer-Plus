// 计算水分子质量
#include<stdio.h>
int main(){
    double mass_per_kuake = 950/3.0e-23;
    int kuake;
    printf("Enter the quantity of the kauke:");
    scanf("%d",&kuake);
    printf("the mass of a kuake of a water moleculer is %f",kuake*mass_per_kuake);
    return 0;
}