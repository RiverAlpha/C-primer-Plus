// 地址表达法
#include<stdio.h>
void main(){
    int grid[30][100];
    //两种写法表示grid[22][0]
    printf("%p\t",&grid[22][0]);
    printf("%p\t",*(grid+22));
    printf("%p\t\n",grid[22]);
    //三种写法表示grid[0][0]
    printf("%p\t",&grid[0][0]);
    printf("%p\t",*grid);
    printf("%p\t",grid[0]);
    printf("%p\t",grid);
    printf("%p\t",&**grid);
}
/*
000000000061F1A0        000000000061F1A0        000000000061F1A0
000000000061CF40        000000000061CF40        000000000061CF40        000000000061CF40   000000000061CF40
*/