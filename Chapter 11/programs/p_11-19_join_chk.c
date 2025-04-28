// 拼接两个字符串，检查第一个数组的大小
#include<stdio.h>
#include<string.h>
#define SIZE 30
#define BUGSIZE 13
char * s_gets(char * st,int n);
int main(){
    char flower[SIZE];
    char addon [] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;

    puts("What is your favorite flower?");
    s_gets(flower,SIZE);
    //strlen 不会计算字符数组中的\0个数，但是字符数组必须为\0字符腾出一个位置
    //往后的+1就是为了给\0腾出位置
    if((strlen(addon) + strlen(flower)+1) <= SIZE){
        strcat(flower,addon);
    }
    puts(flower);
    puts("What is your favorate bug?");
    s_gets(bug,BUGSIZE);
    available = BUGSIZE - strlen(bug) -1;
    strncat(bug,addon,available);
    puts(bug);

    return 0;
}
char * s_gets(char * st,int n){
    char * ret_val;
    int i = 0;

    ret_val = fgets(st,n,stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
        {
            i++;
        }
        if(st[i] == '\n')
            st[i] = '\0';
        else
            // 清空缓冲区，尽管fget只读取前n-1个字符，但是多余的字符还是会留在缓冲区
            while (getchar() != '\n')
            {
                continue;
            }
    }
    return ret_val;
}