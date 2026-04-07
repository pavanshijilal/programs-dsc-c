//Pavan S Lal
//ISP
//25020032
#include<stdio.h>
#include<math.h>
void sin_series();
void cos_series();
void SUM();

int main()
{
    sin_series();
    cos_series();
    SUM();
    return 0;
}
void sin_series()
{
   float factorial, term;
   int m,n,c;
   float phi,sum_s=0;
   int i,j;

   printf("\nEnter number of terms in the expansion:");
   scanf("%d",&m);

   printf("\nEnter the angle:");
   scanf("%f",&phi);

   for(n=1;n<=m;n=n+2)
   {
     factorial=1;

     for(i=1;i<=n;i++)
     {
        factorial=factorial*i;
     }

     j=(n-1)/2;
     c=(j%2==0)?1:-1;

     term=(c)*(pow(phi,n)/factorial);

     if(fabs(term)<0.000001)
        break;

     sum_s+=term;
   }

   printf("\nSum of sin series: %f",sum_s);
}
void cos_series()
{
   float factorial, term;
   int m,n,c;
   float phi,sum_c=0;
   int i,j;

   printf("\nEnter number of terms in the expansion:");
   scanf("%d",&m);

   printf("\nEnter the angle:");
   scanf("%f",&phi);

   for(n=0;n<=m;n=n+2)
   {
     factorial=1;

     for(i=1;i<=n;i++)
     {
        factorial=factorial*i;
     }

     j=n/2;
     c=(j%2==0)?1:-1;

     term=(c)*(pow(phi,n)/factorial);

     if(fabs(term)<0.000001)
        break;

     sum_c+=term;
   }

   printf("\nSum of cos series: %f",sum_c);
}
void SUM()
{
    float s=0, term;
    int i,n;

    printf("\nEnter number of terms in the expansion:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        term=pow((1/(float)i),i);

        if(term<0.000001)
            break;

        s+=term;
    }

    printf("\nSum of the series: %f",s);
}
