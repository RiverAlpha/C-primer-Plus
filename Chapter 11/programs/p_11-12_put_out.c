#include<stdio.h>
#define DEF "I am a #define string."
void main(){
    char str1[80] = "An array was initialized to me.";
    const char * str2 = "A pointer was initialized to me.";
    puts("I'm an argument to puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    puts(str2+4);
}
/*
I'm an argument to puts().
I am a #define string.
An array was initialized to me.
A pointer was initialized to me.
ray was initialized to me.
inter was initialized to me.
*/