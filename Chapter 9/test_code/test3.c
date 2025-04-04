#include<stdio.h>
void main(){
    void Chline(char,int,int);

    int line_count = 5;
    int char_count = 6;
    char ch = '%';
    Chline(ch,line_count,char_count);
}

void Chline(char ch,int x,int y){
    for(int i = 0;i<x;i++){
        for(int j = 0;j<y;j++){
            printf("%c",ch);
        }
        putchar('\n');
    }
}