// strcmp()的返回值
#include<stdio.h>
#include<string.h>
int main(){
    printf("strcmp(\"A\",\"A\") is ");
    printf("%d\n",strcmp("A","A"));

    printf("strcmp(\"A\",\"B\") is ");
    printf("%d\n",strcmp("A","B"));

    printf("strcmp(\"B\",\"A\") is ");
    printf("%d\n",strcmp("B","A"));

    printf("strcmp(\"C\",\"A\") is ");
    printf("%d\n",strcmp("C","A"));

    printf("strcmp(\"Z\",\"a\") is ");
    printf("%d\n",strcmp("Z","a"));

    printf("strcmp(\"apples\",\"apple\") is ");
    printf("%d\n",strcmp("apples","apple"));

    printf("strcmp(\"apples\",\"apple\") is ");
    printf("%d\n",strcmp("apples","appleZ"));

    return 0;
}
/*
strcmp("A","A") is 0
strcmp("A","B") is -1
strcmp("B","A") is 1
strcmp("C","A") is 1
strcmp("Z","a") is -1
strcmp("apples","apple") is 1
strcmp("apples","apple") is 1
*/
/*
Z 排在 a 后面

*/