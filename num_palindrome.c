/*Pavan S Lal
ISP*/
#include<stdio.h>
int palindrome(int num);
int main()
{
    int num;
    printf("\nenter the number to reverse:\n");
    scanf("%d",&num);
    printf("\nThe number is %d",num);
    printf("\nThe reverse of the number is %d",reverse(num));
    return 0;
}
int reverse(int num)
{
    int temp,rev=0,d;
    temp=num;
    while(temp!=0)
    {
       d=temp%10;
       rev=rev*10+d;
       temp=temp/10;
    }
    if(rev==num)
    {
        printf("\nThe number is Palindrome");
    }
    else
    {
        printf("\nThe number is not Palindrome");
    }
    return rev;
}
