// 把2英寻转换为英尺
#include<stdio.h>
int main(){
    int  feet, fathoms;

    // 等价于
    //int feet
    //int fathoms

    fathoms = 2;
    feet = 6*fathoms;
    printf("There are %d feet in %d fathoms!\n",feet,fathoms);
    printf("Yes, I said %d feet",6*fathoms);

    return 0;
}