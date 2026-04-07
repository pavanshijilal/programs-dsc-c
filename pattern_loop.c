/*Pavan S Lal
ISP*/
#include<stdio.h>
void pattern1();
void pattern2();
int main()
{
    int choice;
    do
    {
        printf("\nEnter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:pattern1();
                   break;
            case 2:pattern2();
                   break;
            case 3:printf("\nThank you for using the program:\n");
                   break;
            default:printf("\nWrong choice");
            
        }
    }while(choice!=3);
    return 0;
}
void pattern1()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
        
    }
}
void pattern2()
{
    int num=1;
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",num++);
        }
        printf("\n");
    }
}
