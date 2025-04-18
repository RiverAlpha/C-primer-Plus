#include<stdio.h>
#define MONTHS 12

int main(){
    //days[1]被替换成29 
    // days[1]到days[4]之间全为0
    int days[MONTHS] = {31,28,[4]=31,30,31,[1] = 29};
    int index;

    for(index = 0;index<MONTHS;index++){
        printf("Month %-2d has %2d days.\n",index+1,days[index]);
    }
    return 0;
}
/*
Month 1  has 31 days.
Month 2  has 29 days.
Month 3  has  0 days.
Month 4  has  0 days.
Month 5  has 31 days.
Month 6  has 30 days.
Month 7  has 31 days.
Month 8  has  0 days.
Month 9  has  0 days.
Month 10 has  0 days.
Month 11 has  0 days.
Month 12 has  0 days.
*/