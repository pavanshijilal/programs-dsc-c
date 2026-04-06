#include<stdio.h>

void saddle(int a[100][100],int m,int n);
void secondlargest(int a[100][100],int m,int n);

int main()
{
    int a[100][100];
    int m,n,i,j;

    printf("\nEnter the number of rows and columns:\n");
    scanf("%d%d",&m,&n);

    printf("\nEnter the elements of matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe Matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    saddle(a,m,n);
    secondlargest(a,m,n);

    return 0;
}

void saddle(int a[100][100],int m,int n)
{
    int i,j,k;
    int f=0;
    int sp,col;

    for(i=0;i<m;i++)
    {
        sp=a[i][0];
        col=0;

        for(j=1;j<n;j++)
        {
            if(a[i][j]<sp)
            {
                sp=a[i][j];
                col=j;
            }
        }

        for(k=0;k<m;k++)
        {
            if(a[k][col]>sp)
                break;
        }

        if(k==m)
        {
            printf("\nSaddle point is %d found at (%d,%d)",sp,i+1,col+1);
            f=1;
        }
    }

    if(f==0)
        printf("\nNo saddle points");
}

void secondlargest(int a[100][100],int m,int n)
{
    int i,j;
    int l,sl;

    l=sl=a[0][0];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>l)
            {
                sl=l;
                l=a[i][j];
            }
            else if(a[i][j]>sl && a[i][j]!=l)
            {
                sl=a[i][j];
            }
        }
    }

    printf("\nSecond Largest Element is %d",sl);
}
