/*Pavan S Lal
ISP*/
#include<stdio.h>
int main()
{
    int ar[10];
    int n,i,max;
    int found=0;
    printf("\nEnter the no: of elements of array:");
    scanf("%d",&n);
    printf("\nEnter the elements of array:");
    for(i=0;i<n;i++)
    {
       scanf("%d",&ar[i]);
    }
    printf("\nThe arrray is");
    for(i=0;i<n;i++)
    {
       printf("\t%d",ar[i]);
    }
    max=ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    printf("\nThe max value in array is %d",max);
    return 0;
}