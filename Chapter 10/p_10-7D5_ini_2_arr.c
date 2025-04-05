// 二维数组初始化
#include<stdio.h>
int main(){
    int sq[2][3] = {{5,6},{7,8}};
    int sq2[2][3] = {5,6,7,8};

    printf("sq[2][3] = {{5,6},{7,8}} 存储结构\n");
    for(int i = 0; i<2;i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",sq[i][j]);
        }
        putchar('\n');
    }

    printf("\n\nsq2[2][3] = {{5,6},{7,8}} 存储结构\n");
    for(int i = 0; i<2;i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",sq2[i][j]);
        }
        putchar('\n');
    }
}
/*
sq[2][3] = {{5,6},{7,8}} 存储结构
5       6       0
7       8       0


sq2[2][3] = {{5,6},{7,8}} 存储结构
5       6       7
8       0       0
*/