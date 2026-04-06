#include<stdio.h>
void isprime(int n);
void iseven(int n);
int main()
{
    int n;
    printf("\nEnter the number :\n");
    scanf("%d",&n);
    isprime(n);
    iseven(n);
    return 0;
}
void isprime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       {
          c++;
       }
         
    }
    if(c==2)
    {
        printf("\nThe number is prime");

    }
    else
    {
        printf("\nThe number is not prime");
    }
}
void iseven(int n)
{
      if(n%2==0)
      {
        printf("\nNUMBER IS Even");
      }
      else
      {
        printf("\nThe number is ODD");
      }
}
