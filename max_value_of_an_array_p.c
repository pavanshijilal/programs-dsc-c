/*Pavan S Lal
ISP*/
#include<stdio.h>
int main()
{
    int a[100];
    int n,i;
    int *p;
    printf("\nEnter the number of elements of array:");
    scanf("%d",&n);
    p=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("\nThe array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
    int max;
    max=*p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>max)
        {
            max=*(p+i);
        }
    }
    printf("\nThe maximum value in the array is %d",max);
    return 0;
}
