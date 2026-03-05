/*Pavan S Lal
ISP*/
#include<stdio.h>
int main()
{
   int a[10][10],t[10][10];
   int m,n;
   printf("\nEnte rthe no of rows ");
   scanf("%d%d",&m,&n);
   int i,j;
   printf("\nEnter the elements of matrix:");
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
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
        t[j][i]=a[i][j];
    }
  }
  printf("\n THe tranpose of the matrix A\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",t[i][j]);
    }
    printf("\n");
  }
  return 0;
}