// 使用fgets
#include<stdio.h>
#define STLEN 10
void main(){
    char words[STLEN];
    int i;

    puts("Enter strings (empty line to quit):");
    while ((fgets(words,STLEN,stdin) != NULL && words[0] != '\n'))    
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
        {
            i++;
        }
        //如果字符串未超过STLEN，进入if
        if (words[i] == '\n')   
        {
            words[i] = '\0';
        }else{
            //如果字符串超过STLEN，进入else
            //无线循环读取字符，知道读取到换行符，功能是截断STLEN后面的字符串
            while (getchar() != '\n')
            {
                continue;
            }
        }
        //puts 会在末尾加上换行符，导致进入循环的换行符后面再加一个换行符，但是有了上面的循环，已经将换行符替换成了\0空字符，类似于fgets
        puts(words);
    }
    puts("Done.");

}
/*

Enter strings (empty line to quit):
This
This
program seems
program s
unwilling to accept long lines.
unwilling
But it doesn't get stuck on long
But it do
lines either/
lines eit

Done.
*/