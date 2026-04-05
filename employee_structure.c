/*Pavan S LAL
ISP*/
#include<stdio.h>
struct employee
{
    char name[10];
    int id;
    float salary;
};
int hs(struct employee em[],int n);
int main()
{
    struct employee em[100];
    int n;
    printf("\n Enter the number of employees");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the details of employee %d:",i);
        scanf("%s %d %f",em[i].name,&em[i].id,&em[i].salary);
    }
    printf("\nDetails of the person with highest salary:");
    hs(em,n);
    return 0;
}
int hs(struct employee em[],int n)
{
    struct employee dummy=em[0];
    int i;
    int max=em[0].salary;
    for(i=0;i<n;i++)
    {
        if(em[i].salary>max)
        {
            dummy=em[i];
        }
    }
    printf("\nThe details of person with highest salary is:\n");
    printf("%s\t\t%d\t\t%.2f",dummy.name,dummy.id,dummy.salary);
    return 0;
}
