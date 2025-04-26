// 千万不要模仿
#include<stdio.h>
int main(){
    char side_a[] = "Side A";
    char dont[] = {'W','O','W','!'};

    char side_b[] = "Side B";
    puts(side_a);
    puts(dont); //dont 不是一个字符串

    return 0;
}
/*
Side A
WOW!Side A
*/
/*
由于dont本身时字符数组，初始化中缺少了一个表示结束的空字符，所以不是一个字符串，因此puts()不知道在何处停止，他会一直打印dont后面内存中的内容，知道发现一个空字符为止，为了让puts能进款读到空字符，我们把dont放在side_a和side_b之间。
*/

/*
疑问：字符数组和字符串的关系？ 字符数组中有空字符串就算字符串？ 程序11-3中有部分区别,但该程序并未涉及字符数组逐个字符初始化的情况

char side_a[] = "Side A";
这样初始化的字符数组会在最后面添加'\0'终止符

char dont[] = {'W','O','W','!'};
而这个不会再后面添加终止符，这是一个不合法的初始化方式
*/