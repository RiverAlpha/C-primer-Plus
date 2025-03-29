#include<stdio.h>
int main(){
    float num;
    printf("Enter a floating-poinit values:");
    scanf("%f",&num);
    printf("\nfixed-point notation: %.6f\n",num);
    printf("\nexponent notation: %e\n",num);
    printf("\np notation: %a\n",num);
    return 0;
}