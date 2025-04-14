// 计算没奶奶的总降水量，每年平均降水量和5年中每月的平均降水量
#include<stdio.h>
#define MONTHS 12
#define YEARS 5
int main(){
    //2010~2014

    const float rain[YEARS][MONTHS] = {
        {4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,},
        {4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,},
        {4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,},
        {4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,},
        {4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,4.3,}
    };
    int year,month;
    float subot,total;
    const float (*p)[MONTHS] = rain;
    printf("Year \tRainFall (inches)\n");
    for(year = 0,total=0;year<YEARS;year++){
        for(month = 0,subot = 0;month<MONTHS;month++){
            subot +=p[year][month];
        }
        printf("%5d %15.1f\n",2010+year,subot);
        total += subot; //5年的降水量
    }

    printf("\nThe yearly average is %.1f inches.\n\n",total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  ");
    printf("Nov  Dec\n");


    for(month = 0;month<MONTHS;month++){
        for(year = 0,subot=0;year<YEARS;year++){
            subot +=p[year][month];
        }
        printf("%4.1f ",subot/YEARS);
    }
    printf("\n");

    return 0;
}