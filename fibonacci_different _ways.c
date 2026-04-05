/*Pavan S Lal
ISP*/
#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    int i;
    int a=0,b=1,c;
    printf("\nEnter the number of terms:");
    scanf("%d",&n);
    /*
    for(i=1;i<=n;i++)
    {
        printf("%d\t",fib(i));
    }*/
   if(n==1)
   {
    printf("%d",a);
   }
   else if(n==2)
   {
    printf("%d\t%d",a,b);
   }
   else
   {
      printf("%d\t%d\t",a,b);
      for(i=0;i<n-2;i++)
      {
         c=a+b;
         printf("%d\t",c);
         a=b;
         b=c;
      }
   }
    
    return 0;
}
int fib(int n)
{
    if(n==1)
      return 0;
    else if(n==2)
      return 1;
    return fib(n-1)+fib(n-2);
}
