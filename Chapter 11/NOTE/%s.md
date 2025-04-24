printf 的 %s 会从给定的地址开始，​​逐个字符输出，直到遇到 '\0'​​。如果数组中没有 '\0'，它会继续读取后面的内存，直到偶然遇到 '\0'（导致未定义行为）
```C
#include<stdio.h>
void main(){
    char name1[7] = {'v','v','\0','c','d'};
    char name2[3] = {'a','b','c'};
    char *p1 = name1;
    char *p2 = name2;
    printf("name1\t%s\n",name1);
    printf("p1\t%s\n",p1);
    printf("name2\t%s\n",name2);
    printf("p2\t%s\n",p2);
}
output :
name1   vv
p1      vv
name2   abcvv
p2      abcvv
```
可见 %s 不会将字符c截断自己添加一个\0字符使其符合行为逻辑正确，而是一直往下输出寻找\0
这里刚好接到name1的vv\0，其编译规则这里不讨论，需要注意的是name2已经定义错误了