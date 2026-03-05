#include<stdio.h>
int main()
{
    char s[100]; 
    int count=0;
    printf("\nEnter a string:");
    scanf(" %[^\n]",s);
    int i=0;
    while(s[i]!='\0')
    {
        count+=1;
        i++;
    }
    printf("\nLength of string is %d",count);
    return 0;
}