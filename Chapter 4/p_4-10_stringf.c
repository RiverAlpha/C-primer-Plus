// 字符串格式
#include<stdio.h>
#define BLURB "Authentic imitation!"
void beta(){
    char name[40] = "alax ssss";
    float cash = 222.22222;
    printf("The %s family just may be $%6.2f richer!\n",name,cash);
}
int main(){
    //自动补完
    printf("[%2s]\n",BLURB);
    //默认前补空格
    printf("[%24s]\n",BLURB);
    //.5表示只显示5个字符 默认前补空格
    printf("[%24.5s]\n",BLURB);
    //-号表示往后补空格
    printf("[%-24.5s]\n",BLURB);

    beta();
    return 0;
}