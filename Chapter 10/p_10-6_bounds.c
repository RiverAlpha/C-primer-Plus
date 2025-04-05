// 数组下标越界
#include<stdio.h>
#define SIZE 4
int main(){
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;

    printf("value1 = %d, value2 = %d\n",value1,value2);
    for(i = -1;i<=SIZE;i++){
        arr[i] = 2*i +1;
    }

    for(i =-1;i<7;i++)
        printf("%2d %d\n",i,arr[i]);
    
    printf("value1 = %d, value2 = %d\n",value1,value2);
    printf("address of arr[-1]: %p\n",&arr[-1]);
    printf("address of arr[4]: %p\n",&arr[4]);
    printf("address of value1: %p\n",&value1);
    printf("address of value2: %p\n",&value2);
    return 0;
}
/*

arr[-1]与value2的地址一致
使用越界的数组下标可能会导致程序改变其他变量的值

value1 = 44, value2 = 88
-1 -1
 0 1
 1 3
 2 5
 3 7
 4 9
 5 0
 6 44
value1 = 44, value2 = -1
address of arr[-1]: 000000000061FDFC
address of arr[4]: 000000000061FE10
address of value1: 000000000061FE18
address of value2: 000000000061FDFC

*/