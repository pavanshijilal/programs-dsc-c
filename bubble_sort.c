/*Pavan S Lal
ISP */
#include<stdio.h>
int main()
{
    int ar[10];
    int n,t;
    int i,j;
     printf("\nEnter number of  elements of array:");
     scanf("%d",&n);
    printf("\nEnter elements of array:");
    for(i=0;i<n;i++) //scans the aray
    {
      scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++) //prints the array
    {
      printf("%d\t",ar[i]);
    }
   for(i=0;i<n;i++)
   {
    for(j=0;j<n-i-1;j++)
    {
        if(ar[j]>ar[j+1])
        {
            t=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=t;
        }
    }
    /*for(j=0;j<n-i-1;j++)
    {
        if(ar[j]<ar[j+1])
        {
            t=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=t;
        }
    }*/
   //Above commented portion can be used for sorting in decreasing order
   }
   printf("\nThe sorted array is:");
   for(i=0;i<n;i++) 
    {
      printf("%d\t",ar[i]);
    }
    return 0;
}