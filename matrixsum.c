/*Pavan S Lal
ISP*/
#include<stdio.h>
int main()
{
  int ar[10][10],b[10][10],sum[10][10];
  int m,n,p,q;
  int i,j;
  printf("\nEnter the number of rows and columns of matrix A:");
  scanf("%d%d",&m,&n);
  printf("\nEnter the number of rows and columns of matrix B:");
  scanf("%d%d",&p,&q);
  printf("\n enter The elements of the matrix A");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
       scanf("%d",&ar[i][j]);
    }
  }
  printf("\nThe matrix is:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
       printf("%d\t",ar[i][j]);
    }
    printf("\n");
  }
  printf("\n enter The elements of the matrix B");
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    {
       scanf("%d",&b[i][j]);
    }
  }
  printf("\nThe matrix is:\n");
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    {
       printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
  if((m==p)&&(p==q))
  {
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          sum[i][j]=ar[i][j]+b[i][j];
        }
    }
    printf("\n The sum of matrix A and B are\n:");
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    {
       printf("%d\t",sum[i][j]);
    }
    printf("\n");
  }
  }
  return 0;
}
