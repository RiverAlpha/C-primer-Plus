// 查看变量被存储在何处
#include<stdio.h>
void mikado(int);
int main(){
    int pooh = 2,bah=5;/*main()的局部变量*/

    printf("In main(), pooh = %d and &pooh = %p\n",pooh,&pooh);
    printf("In main(),bah = %d and &bah = %p\n",bah,&bah);
    mikado(pooh);

    return 0;
}
void mikado(int bah){
    int pooh = 10;

    printf("In main(), pooh = %d and &pooh = %p\n",pooh,&pooh);
    printf("In main(),bah = %d and &bah = %p\n",bah,&bah);
}
/*
In main(), pooh = 2 and &pooh = 000000000061FE1C
In main(),bah = 5 and &bah = 000000000061FE18
In main(), pooh = 10 and &pooh = 000000000061FDDC
In main(),bah = 2 and &bah = 000000000061FDF0

可以看出 即使是传入的形参地址也是不同的
*/