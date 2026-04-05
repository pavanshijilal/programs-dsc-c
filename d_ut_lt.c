/*Pavan S Lal
ISP*/
#include<stdio.h>

void diagonal(int a[][100], int, int);
void ut(int a[][100], int, int);
void lt(int a[][100], int, int);

int main()
{
    int m,n,i,j;
    int choice;
    int a[100][100];

    do
    {
        printf("\nMENU\n1.Diagonal\n2.Upper Triangular\n3.Lower Triangular\n4.Exit\n");
        scanf("%d",&choice);

        if(choice==4)
            break;

        printf("\nEnter the rows and columns: ");
        scanf("%d%d",&m,&n);

        printf("\nEnter the matrix elements:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("\nThe matrix is:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }

        switch(choice)
        {
            case 1:
                diagonal(a,m,n);
                break;

            case 2:
                ut(a,m,n);
                break;

            case 3:
                lt(a,m,n);
                break;

            default:
                printf("\nInvalid Choice");
        }

    } while(choice!=4);

    return 0;
}

void diagonal(int a[][100], int m, int n)
{
    int d[10][10];
    int i,j;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                d[i][j]=a[i][j];
            else
                d[i][j]=0;
        }
    }

    printf("\nDiagonal matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
}

void ut(int a[][100], int m, int n)
{
    int upper[10][10];
    int i,j;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
                upper[i][j]=a[i][j];
            else
                upper[i][j]=0;
        }
    }

    printf("\nUpper triangular matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",upper[i][j]);
        }
        printf("\n");
    }
}

void lt(int a[][100], int m, int n)
{
    int lower[10][10];
    int i,j;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
                lower[i][j]=a[i][j];
            else
                lower[i][j]=0;
        }
    }

    printf("\nLower triangular matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",lower[i][j]);
        }
        printf("\n");
    }
}
