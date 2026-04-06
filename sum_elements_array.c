/*Pavan S Lal
ISP*/
#include<stdio.h>
int suma(int a[],int n);
int sumap(int a[],int n);
int main()
{
    int a[100];
    int n,i;
    printf("\nEnter the number of elements of array:\n");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    suma(a,n);
    sumap(a,n);
    return 0;
}
int suma(int a[],int n)
{
    int sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("\nThe sum of elements of array is %d\n",sum);
    return 0;
}
int sumap(int a[],int n)
{
    int *p=a;
    int sum=0;
    int i=0;
    while(i<n)
    {
        sum+=*(p+i);
        i++;
    }
    printf("\nThe sum of elements of array is %d\n",sum);
    return 0;
}
