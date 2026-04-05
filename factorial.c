#include<stdio.h>
/* Factorial using loop
int main()
{
    int n;
    int i,fact=1;
    printf("\nEnter the number for which factorial should wbe found:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
        if(n==0)
        {
            printf("0! = %d",1);
            break;
        }
    }
    printf("%d! = %d",n,fact);
    return 0;
}*/
int fact(int n);
int main()
{
    int n;
    printf("\nEnter the value for which the factorial to be found:\n");
    scanf("%d",&n);
    printf("%d! = %d",n,fact(n));
    return 0;
}
int fact(int n)
{
    if(n==0)
       return 1;
    return n*fact(n-1);
    
}
