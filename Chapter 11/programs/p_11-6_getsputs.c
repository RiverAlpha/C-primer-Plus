#include<stdio.h>
#define STLEN 81
int main(){
    char words[STLEN];

    puts("Enter a  String, please.");
    gets(words);
    printf("your string twice:\n");
    printf("%s\n",words);
    puts(words);
    //printf("The length of words is %d\n",sizeof words);
    puts("Done.");

    return 0;
}
/*
Enter a  String, please.
I want to learn about string theory!
your string twice:
I want to learn about string theory!
I want to learn about string theory!
Done.
*/