/*Pavan S Lal
Isp*/
#include<stdio.h>
int main()
{
    char tos[30][10]={"India","Pakishtan","America","Canada","Spain"};
    int i;
    printf("\nThe elements of table of string are:\n");
    for(i=0;i<6;i++)
    {
        printf("%s\t",tos[i]);
        printf("\n");
    }
    return 0;
}