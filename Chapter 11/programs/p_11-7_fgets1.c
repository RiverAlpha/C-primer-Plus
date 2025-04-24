// fgets和fputs
#include<stdio.h>
#define STLEN 14
void main(){
    char word[STLEN];
    puts("Enter a  String, please.");
    fgets(word,STLEN,stdin);
    printf("Your string twice (puts(), then fputs():\n");
    puts(word);
    fputs(word,stdout);
    puts("Enter another string, please.");
    fgets(word,STLEN,stdin);
    printf("Your string twice (puts(), then fputs():\n");
    puts(word);
    fputs(word,stdout);
    puts("Done.");
}
/*
Enter a  String, please.
apple pie
Your string twice (puts(), then fputs():
apple pie

apple pie
Enter another string, please.
strawberry shortcake
Your string twice (puts(), then fputs():
strawberry sh
strawberry shDone.
*/