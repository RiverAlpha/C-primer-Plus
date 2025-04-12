#include<stdio.h>
int main(){
    int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
    //这里zippo+1 地址增加了8个字节 zippo代表二维数组 主数组为行数组 每个行数组包含两个Int类型的值 一个int占4个字节 
    //所以当二维数组加一相当于 增加类型值所占大小（这里为int 4）*每行数组大小（这里每行数组是一个包含两个元素的int 4数组）
    printf("\tzippo = %p,\tzippo + 1 = %p\n",zippo,zippo+1);
    //这里zippo[0]代表一维数组（zippo第一行的数组）地址 +1代表 &zippp[0][1] 增加了一个元素的单位所以增加4
    printf("\tzippo[0] = %p,\tzippo[0] + 1 = %p\n",zippo[0],zippo[0]+1);
    printf("\t*zippo = %p,\t*zippo + 1 = %p\n",*zippo,*zippo+1);
    printf("\tzippo[0][0] = %d\n",zippo[0][0]);
    printf("\t*zippo[0] = %d\n",*zippo[0]);
    printf("\t**zippo = %d\n",**zippo);
    printf("\tzippo[2][1] = %d\n",zippo[2][1]);
    printf("\t*(*(zippo+2)+1) = %d\n",*(*(zippo+2)+1));
    return 0;
}
/*

        zippo = 000000000061FE00,       zippo + 1 = 000000000061FE08
        zippo[0] = 000000000061FE00,    zippo[0] + 1 = 000000000061FE04
        *zippo = 000000000061FE00,      *zippo + 1 = 000000000061FE04
        zippo[0][0] = 2
        *zippo[0] = 2
        **zippo = 2
        zippo[2][1] = 3
        *(*(zippo+2)+1) = 3
*/