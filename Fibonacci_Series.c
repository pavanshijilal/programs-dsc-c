/*Pavan S Lal
ISP*/
#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("\nEnter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\n%d",fib(i));
    }
    return 0;
}
int fib(int n)
{
    if(n==1)
     return 0;
    else if(n==2)
     return 1;
    else
     return fib(n-2)+fib(n-1);
}
