//递归演示
#include<stdio.h>

int main(){
    void up_and_down(int);
    up_and_down(1);
    return 0;
}

void up_and_down(int n){
    printf("Level %d: n location %p\n", n,&n);
    if (n<4){
        up_and_down(n+1);
    }
    printf("Level %d: n location %p\n", n,&n);
}
/*
1->2->3->4->(4s退出)->(3退出)->(2退出)->(1退出)

Level 1: n location 000000000061FE00
Level 2: n location 000000000061FDD0
Level 3: n location 000000000061FDA0
Level 4: n location 000000000061FD70
Level 4: n location 000000000061FD70
Level 3: n location 000000000061FDA0
Level 2: n location 000000000061FDD0
Level 1: n location 000000000061FE00

*/