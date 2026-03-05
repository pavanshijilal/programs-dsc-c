/*Pavan S Lal
ISP*/
#include<stdio.h>
#include<string.h>
#define ITEMS 5
#define MAX 20
int main()
{
    char s[ITEMS][MAX],dummy[MAX];
    int i=0,j;
    printf("\nEnter the strings:");
    while(i<ITEMS)
    {
        scanf(" %[^\n]",s[i++]);
    }
    printf("\nThe strings are :\n");
    for(i=0;i<ITEMS;i++)
    {
        printf("%s",s[i]);
        printf("\n");
    }
    for(i=0;i<ITEMS;i++)
    {
        for(j=0;j<ITEMS-i-1;j++)
        {
            if((strcmp(s[j],s[j+1])>0))
            {
                strcpy(dummy,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],dummy);
            }
        }
    }
    printf("\n Alphabetical Order\n");
    for(i=0;i<ITEMS;i++)
    {
        printf("%s",s[i]);
        printf("\n");
    }
    return 0;
}