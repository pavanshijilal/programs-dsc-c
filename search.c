/*Pavan S Lal
ISP */
#include<stdio.h>
int main()
{
    int ar[10];
    int  i,search;
    int found=0;
    printf("\nEnter the elements of the array:");
    for(i=0;i<10;i++)
    {
       scanf("%d",&ar[i]);
    }
     printf("\nEnter the value to search:\n");
     scanf("%d",&search);
     for(i=0;i<10;i++)
     {
        if(ar[i]==search)
        {
            printf("\nValue found at %d th position of array",i);
            found=1;
        }
        if(found==1)
        {
            break;
        }
        else
        {
            printf("\nValue not found in array");
        }
     }
     return 0;
}