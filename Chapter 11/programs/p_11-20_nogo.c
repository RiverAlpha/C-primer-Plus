// 该程序是否能正常运行
//假设要把用户的相应与一寸处的字符串作比较
#include<stdio.h>
#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char *st,int n);
void main(){
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    s_gets(try,SIZE);
    while (try!=ANSWER)
    {
        puts("No! that's wrong.Try again.");
        s_gets(try,SIZE);
    }
    puts("That's right!");
}

char * s_gets(char *st,int n){
    char * ret_val;
    int i = 0;

    ret_val = fgets(st,n,stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
        {
            i++;
        }
        if (st[i] == '\n')
        {
            st[i] = '\0'; 
        }else{
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}
/*
Who is buried in Grant's tomb?
aAa
No! that's wrong.Try again.
saas
No! that's wrong.Try again.
dasda
No! that's wrong.Try again.
aaaa
No! that's wrong.Try again.
Grant
No! that's wrong.Try again.
*/
/*
ANSWER和try都是指针，所以try!=ANSWER 检查的不是两个字符串是否相等，而是这两个字符串的地址是否相同。

比较两个字符串是否相同应该使用strcmp()函数
*/
