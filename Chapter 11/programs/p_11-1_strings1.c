#include<stdio.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81
int main(){
    char words[MAXLENGTH] = "I am a string in array.";
    const char* pt1 = "Something is pointing at me";
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);
    return 0;
}            