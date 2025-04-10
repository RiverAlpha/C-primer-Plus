// 指针操作
#include<stdio.h>
int main(){
    int urn[5] = {100,200,300,400,500};
    int *ptr1,*ptr2,*ptr3;

    ptr1 = urn;          //把一个地址赋给指针
    ptr2 = &urn[2];      //把一个地址赋给指针

    printf("pointer values,dareferenced pointer,pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",ptr1,*ptr1,&ptr1);

    //指针加法

    ptr3 = ptr1 +4;
    printf("\nadding an int to a pointer:\n");
    printf("the size of int %d:\n",sizeof urn[0]);
    //vc6++ int* 大小为4 
    printf("the size of int* %d:\n",sizeof ptr1);
    printf("ptr1 + 4 = %p,*(ptr1+4) = %d\n",ptr1+4,*(ptr1+4));
    ptr1 ++;
    printf("\n values after ptr1++:\n");
    printf("ptr1 = %p,*ptr1 = %d, &ptr1 = %p\n",ptr1,*ptr1,&ptr1);
    ptr2--;
    printf("\n values after --ptr2:\n");
    printf("ptr2 = %p,*ptr2 = %d, &ptr2 = %p\n",ptr2,*ptr2,&ptr2);
    --ptr1;           // reset to original values;
    ++ptr2;           // reset to original values;
    printf("\n Pointer reset to original values:\n");
    printf("ptr1 = %p,ptr2 = %p\n",ptr1,ptr2);
    // a pointer minus anotehr one
    printf("\nsubtracting one pointer from another:\n");
    // ptr2-ptr1 地址相差了8个字节 但是转化为int类型为2 这里不转化为int*类型 而是int类型（这两个指针所指向的两个元素相隔两个int）
    printf("ptr1 = %p,ptr2 = %p,ptr2-ptr1 = %td\n",ptr1,ptr2,ptr2-ptr1);
    // subtrscting an integer from a pointer
    printf("\nsubtrscting an integer from a pointer:\n");
    //同上
    printf("ptr3 = %p,ptr3 - 2 = %p\n",ptr3,ptr3-2);
    //
    printf("&ptr2 = %p,&ptr2 - 2 = %p\n",&ptr2,&ptr2-2);
    return 0;
}

/*
pointer values,dareferenced pointer,pointer address:
ptr1 = 000000000061FE00, *ptr1 = 100, &ptr1 = 000000000061FDF8

adding an int to a pointer:
the size of int 4:
the size of int* 8:
ptr1 + 4 = 000000000061FE10,*(ptr1+4) = 500

 values after ptr1++:
ptr1 = 000000000061FE04,*ptr1 = 200, &ptr1 = 000000000061FDF8

 values after --ptr2:
ptr2 = 000000000061FE04,*ptr2 = 200, &ptr2 = 000000000061FDF0

 Pointer reset to original values:
ptr1 = 000000000061FE00,ptr2 = 000000000061FE08

subtracting one pointer from another:
ptr1 = 000000000061FE00,ptr2 = 000000000061FE08,ptr2-ptr1 = 2

subtrscting an integer from a pointer:
ptr3 = 000000000061FE10,ptr3 - 2 = 000000000061FE08
&ptr2 = 000000000061FDF0,&ptr2 - 2 = 000000000061FDE0
*/