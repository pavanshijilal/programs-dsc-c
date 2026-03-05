/*Pavan S Lal
ISP*/
#include<stdio.h>
int main()
{
  int ar[10][10];
  int m,n;
  int i,j;
  printf("\nEnter the number of rows and columns of matrix:");
  scanf("%d%d",&m,&n);
  printf("\n enter The elements of the matrix");
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
  return 0;
}
