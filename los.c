/*Pavan S Lal
ISP*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("\nEnter the sentence:");
    scanf(" %[^\n]",s);
    int c=0,i=0;
    while(s[i]!='\0')
    {
        c++;
        i++;
    }
    printf("\nThe length of string is %d",c);
    printf("\nThe length of string is %lu",strlen(s));
    return 0;
}
