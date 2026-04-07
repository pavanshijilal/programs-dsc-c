/*Pavan S Lal
ISP*/
#include<stdio.h>
int fact(int);
int main()
{
    int n,r;
    float nPr,nCr;
    printf("\nEnter value of n and r");
    scanf("%d%d",&n,&r);
    nPr=fact(n)/fact(n-r);
    nCr=(fact(n))/(fact(r)*fact(n-r));
    printf("\n%dP%d = %.1f",n,r,nPr);
    printf("\n%dC%d = %.1f",n,r,nCr);
    return 0;
}
int fact(int n)
{
    if(n==0)
       return 1;
    return n*fact(n-1);
}
