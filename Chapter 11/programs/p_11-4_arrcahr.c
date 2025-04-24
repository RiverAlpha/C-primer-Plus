// 指针数组，字符串数组
#include<stdio.h>
#define SLEN 40
#define LIM 5
int main(){
    //一维数组 内涵五个指针（内存占用8*5（五个指针）=40字节） 与 (*p)[40]相区别
    const char *mytalents[LIM] = {
        "Adding numbers swiftly",
        "Multiplaying accurately","stashing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };
    //二维数组 一个内涵五个数组的数组（占用200个字节）
    char yourtalents[LIM][SLEN] = {
        "Walking in a straight line",
        "Sleeping","Watvhing television",
        "Mailing letters","Reading email"
    };
    char (*hertalents)[SLEN] = yourtalents+4;
    int i;

    puts("lets's compare talents.");
    printf("%-36s %-25s %-37s\n","My Talents","Your Talents","Hertalents");
    for ( i = 0; i < LIM; i++)
    {
        printf("%-36s %-25s %-37s\n",mytalents[i],yourtalents[i],hertalents);
        hertalents--;
    }
    printf("\n sizeof mytalents: %zd,sizeof yourtalents:%zd\n",sizeof(mytalents),sizeof(yourtalents));
    return 0;
    
}
/*
虽然mytalents[0]和yourtalents[0]都表示一个字符串 但是mytalents和yourtalents并不相同
*/