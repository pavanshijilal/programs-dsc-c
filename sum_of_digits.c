/*Pavan S Lal
ISP*/
#include<stdio.h>
int sod(int num);
int sod_r(int num);
int main()
{
    int num;
    printf("\nEnter a number:\n");
    scanf("%d",&num);
    printf("\nThe sum of digits of the number is %d",sod(num));
    printf("\nThe sum of digits of the number using recursion is %d",sod_r(num));
    return 0;
}
int sod(int num)
{
     int temp,sum=0;
     temp=num;
     int d;
     while(temp!=0)
     {
        d=temp%10;
        sum+=d;
        temp/=10;
     }
     return sum;
}
int sod_r(int num)
{
    if(num==0)
       return 0;
    return num%10+sod_r(num/10);
}
