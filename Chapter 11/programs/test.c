#include<stdio.h>
void main(){
    char name1[7] = {'v','v','\0','c','d'};
    char name2[3] = {'a','b','c'};
    char *p1 = name1;
    char *p2 = name2;
    printf("name1\t%s\n",name1);
    printf("p1\t%s\n",p1);
    printf("name2\t%s\n",name2);
    printf("p2\t%s\n",p2);
}