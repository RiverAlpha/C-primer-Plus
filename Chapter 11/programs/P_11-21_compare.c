// 该程序能正常运行
//假设要把用户的相应与一寸处的字符串作比较
#include<stdio.h>
#include<string.h>
#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char *st,int n);
void main(){
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    s_gets(try,SIZE);
    //while(strcmp(try,ANSWER))
    while (strcmp(try,ANSWER) != 0)
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
sada
No! that's wrong.Try again.
asda
No! that's wrong.Try again.
Grant
That's right!
*/