#include<stdio.h>
char * s_gets(char *st,int n){
    char * ret_val;
    int i=0;

    ret_val = fgets(st,n,stdin);
    if(ret_val){ ///即 ret_val != NULL
        while (st[i] != '\n' && st[i] != '\0')
        {
            i++;
        }
        //如果字符串未超过STLEN，进入if
        if (st[i] == '\n')   
        {
            st[i] = '\0';
        }else{
            //如果字符串超过STLEN，进入else
            //无线循环读取字符，知道读取到换行符，功能是截断STLEN后面的字符串
            while (getchar() != '\n')
            {
                continue;
            }
        }
        
    }
    return ret_val;
}
void main(){
    char st[10];
    puts(s_gets(st,10));
}