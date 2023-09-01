/*
name = Tejas Budhe
Roll No. = 06
program id = 09
SE-IT (sem 3)
2023-24
*/


#include<stdio.h>
void main()
{
    /*dynamic input of array*/
    int n;
    printf("enter the number of elements you want in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*duplication counter*/
    int counter =0;
    int temp;
    for(int i=0; i<n; i++)
    {
        temp =0;
        /*checking that an elemnt is present how many times in array by temporary variable(temp)*/
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                counter++;
                temp++;
            }
        }
        if(temp>1){
            /*
            if the element replicated more than once 
            then do not increment counter
            this is necessary as if an elemnt is seen 3 times it will be counted 3 times
            for that condition is important
            */
            counter-=temp;
        }
    }
    /*printing the duplicate elements counter*/
    printf("number of duplicate elements are: %d", counter);
}
