#include<stdio.h>
int main(){
    int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
    // 指向一个内涵两个int类型的数组
    int (*pc)[2];
    //pc可类比zippo zippo每行（主数组）包含两个元素
    pc = zippo;

    printf("\tpc = %p,\tpc + 1 = %p\n",pc,pc+1);
    printf("\tpc[0] = %p,\tpc[0] + 1 = %p\n",pc[0],pc[0]+1);
    printf("\t*pc = %p,\t*pc + 1 = %p\n",*pc,*pc+1);
    printf("\tpc[0][0] = %d\n",pc[0][0]);
    printf("\t*pc[0] = %d\n",*pc[0]);
    printf("\t**pc = %d\n",**pc);
    printf("\tpc[2][1] = %d\n",pc[2][1]);
    printf("\t*(*(pc+2)+1) = %d\n",*(*(pc+2)+1));
    return 0;
}