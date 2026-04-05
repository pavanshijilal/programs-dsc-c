/*Pavan S Lal
Isp*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int f=1;
    int i;
    printf("\nEnter the string:");
    scanf("%[^\n]",s);
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        printf("\nThe string is Palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }
    return 0;
}
