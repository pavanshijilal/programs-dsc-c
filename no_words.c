#include<stdio.h>
int main()
{
    char s[10];
    printf("\nEnter the stringg:");
    scanf(" %[^\n]",s);
    int i=0;
    int c=0;
    while(s[i]!='\0')
    {
        if((s[i]==' '&& s[i+1]!=' '))
        {
            c+=1;
        }
        i++;
    }
    printf("\nNo:of words in string=%d",c+1);
    return 0;
}