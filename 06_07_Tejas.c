/*
name = Tejas Budhe
Roll No. = 06
program id = 07
SE-IT (sem 3)
2023-24
*/


#include<stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
};

void main()
{
    struct time t1;
    printf("Enter value of hours :");
    scanf("%d",&t1.hour);
    printf("Enter value of min :");
    scanf("%d",&t1.min);
    printf("Enter value of sec :");
    scanf("%d",&t1.sec);


    struct time t2;
    printf("Enter value of hours :");
    scanf("%d",&t2.hour);
    printf("Enter value of min :");
    scanf("%d",&t2.min);
    printf("Enter value of sec :");
    scanf("%d",&t2.sec);

    t1.sec += t2.sec;
    if(t1.sec > 60)
    {
        t1.sec -= 60;
        t1.min++;
    }

    t1.sec += t2.min;
    if(t1.min > 60)
    {
        t1.min -= 60;
        t1.hour++;
    }

    t1.hour += t2.hour;
    if(t2.hour > 24)
    {
        t1.sec -= 24;
    }

    printf("Hours : ");
    printf("%d\n",t1.hour);
    printf("Minutes : ");
    printf("%d\n",t1.min);
    printf("Seconds : ");
    printf("%d\n",t1.sec);
}
