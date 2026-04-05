/*Pavan S Lal
ISP*/
#include<stdio.h>
void add();
void sub();
void prod();
void quotient();
int main()
{
    int choice;
    do
    {
        printf("\n1.ADD\n2.SUB\n3.Product\n4.Qoutient\n5.Exit\nEnter the choice\n");
        scanf("%d",&choice);       
        switch(choice)
        {
            case 1:add();
                   break;
            case 2:sub();
                   break;
            case 3:prod();
                   break;
            case 4:quotient();
                   break;
            case 5:printf("\nThank you for using\n");
                   break;
            default:printf("\nInvalid Choice");
        }
    }while(choice != 5);
    return 0;
}
void add()
{
    int a[100][100],b[100][100],c[100][100];
    int m1,n1,m2,n2;
    int i,j;
    printf("Enter the number of rows and columns of matrix a:\n");
    scanf("%d %d",&m1,&n1);
    printf("Enter the number of rows and columns of matrix b:\n");
    scanf("%d %d",&m2,&n2);
    printf("\nEnter the elements of matrix a:\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of matrix b:\n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
    if((m1==m2)&&(n1==n2))
    {
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    else
    {
        printf("\nMatrix cannot be added");
    }
    printf("\nThe matrix is :\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

void sub()
{
    int a[100][100],b[100][100],c[100][100];
    int m1,n1,m2,n2;
    int i,j;
    printf("Enter the number of rows and columns of matrix a:\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter the number of rows and columns of matrix b:\n");
    scanf("%d%d",&m2,&n2);
    printf("\nEnter the elements of matrix a:\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of matrix b:\n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
    if((m1==m2)&&(n1==n2))
    {
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                c[i][j]=a[i][j]-b[i][j];
            }
        }
    }
    else
    {
        printf("\nMatrix cannot be subtracted");
    }
    printf("\nThe matrix is :\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

void prod()
{
    int a[100][100],b[100][100],c[100][100];
    int m1,n1,m2,n2;
    int i,j;
    printf("Enter the number of rows and columns of matrix a:\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter the number of rows and columns of matrix b:\n");
    scanf("%d%d",&m2,&n2);
    printf("\nEnter the elements of matrix a:\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of matrix b:\n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
    if((m1==m2)&&(n1==n2))
    {
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                c[i][j]=a[i][j]*b[i][j];
            }
        }
    }
    else
    {
        printf("\nMatrix cannot be Multiplied");
    }
    printf("\nThe matrix is :\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
void quotient()
{
    int a[100][100],b[100][100],c[100][100];
    int m1,n1,m2,n2;
    int i,j;
    printf("Enter the number of rows and columns of matrix a:\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter the number of rows and columns of matrix b:\n");
    scanf("%d%d",&m2,&n2);
    printf("\nEnter the elements of matrix a:\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of matrix b:\n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
    if((m1==m2)&&(n1==n2))
    {
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                if(b[i][j]!=0)
                c[i][j]=a[i][j]/b[i][j];
            }
        }
    }
    else
    {
        printf("\nMatrix cannot be divided");
    }
    printf("\nThe matrix is :\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
