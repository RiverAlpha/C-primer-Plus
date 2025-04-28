// 拼接两个字符串
#include<stdio.h>
#include<string.h>
#define SIZE 80
char * s_gets(char * st,int n);
int main(){
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";

    puts("What is your favorite flower?");

    if(s_gets(flower,SIZE)){
        strcat(flower,addon);
        puts(flower);
        puts(addon);
    }else{
        puts("End of file encounterd!");
    }
    puts("bye");
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
            // 清空缓冲区，尽管fgets只读取前n-1个字符，但是多余的字符还是会留在缓冲区
            while (getchar() != '\n')
            {
                continue;
            }
    }
    return ret_val;
}
/*
What is your favorite flower?
wonderflower
wonderflowers smell like old shoes.
s smell like old shoes.
bye
*/