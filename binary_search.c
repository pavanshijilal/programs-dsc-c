/*Pavan S Lal
ISP */
#include<stdio.h>
int main()
{
    int ar[10];
    int i,n;
    int search,found;
    int low,high,mid;
    printf("\nEnter the no: of elements in array:");
    low=0;
    scanf("%d",&n);
    high=n-1;
    printf("E\nEnte the elements of array in sorted form:");
    for(i=0;i<n;i++) 
    {
      scanf("%d",&ar[i]);
    }
    printf("\n The array is :");
    for(i=0;i<n;i++) 
    {
      printf("%d\t",ar[i]);
    }
    printf("\n Enter the value to seach in array:");
    scanf("%d",&search);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ar[mid]==search)
        {
            found=1;
            printf("\nValue found at %d th position",mid);
        }
        else if(ar[mid]>search)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        if(found==1)
        {
            break;
        }
    }
    return 0;
}

