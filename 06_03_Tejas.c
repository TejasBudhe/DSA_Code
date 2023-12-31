/*
name = Tejas Budhe
Roll No. = 06
program id = 03
SE-IT (sem 3)
2023-24
*/


#include<stdio.h>
#include<string.h>

/*stucture of a student*/
struct student
{
    int rollNo;
    char name[20];
    float perc;
}std[5];

void main(){
    /*taking in 5 student details*/
    for(int i=0; i<5; i++)
    {
        printf("enter the details of %d th student\n", i+1);
        printf("enter the roll no.: ");
        scanf("%d", &std[i].rollNo);
        printf("enter the name: ");
        scanf("%s", std[i].name);
        printf("enter the percentage.: ");
        scanf("%f", &std[i].perc);
        printf("\n");
    }

    /*sorting by roll no*/
    for(int i=0; i<5; i++)
    {
        //selection sort
        int min=std[i].rollNo, idx=i;
        for(int j=i; j<5; j++)
        {
            if(min>std[j].rollNo)
            {
                /*saving the min*/
                min=std[j].rollNo;
                idx=j;
            }
        }
        /*swap*/
        std[idx].rollNo=std[i].rollNo;
        std[i].rollNo=min;
        char temp[20];
        strcpy(temp,std[idx].name);
        strcpy(std[idx].name,std[i].name);
        strcpy(std[i].name,temp);
        float num=std[idx].perc;
        std[idx].perc=std[i].perc;
        std[i].perc=num;
    }

    /*printing the sorted array of structures*/
    printf("\n\n\n\n");
    for(int i=0; i<5; i++)
    {
        printf("the details of %d th student\n", i+1);
        printf("the roll no.: ");
        printf("%d\n", std[i].rollNo);
        printf("the name: ");
        printf("%s\n", std[i].name);
        printf("enter the percentage.: ");
        printf("%f\n", std[i].perc);
        printf("\n");
    }
}
