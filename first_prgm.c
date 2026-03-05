/*Pavan S Lal
ISP */
#include<stdio.h>
int main()
{
    int a,b;
    int sum,diff,prod,quot,modulo;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    quot=a/b;
    modulo=a%b;
    printf("Sum=%d\n",sum);
    printf("Difference=%d\n",diff);
    printf("Product=%d\n",prod);
    printf("Quotient=%d\n",quot);
    printf("Modulo=%d\n",modulo);
    return 0;

}