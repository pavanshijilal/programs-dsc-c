/*Pavan S Lal
Isp*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,c=0,n;
    printf("\nEnter the string:");
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
        if((s[i]==s[n-i-1]))
        {
            c+=1;
        }
    }
    if(c==i)
    {
        printf("\nString is Palindrome");
    }
    else
    {
        printf("\nString is not palindrome");
    }
    return 0;
}