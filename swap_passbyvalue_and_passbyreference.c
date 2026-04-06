#include<stdio.h>
void swap(int x ,int y);
void swapp(int *x,int *y);
int main()
{
    int a,b;
    printf("\nEnter the values of a and b");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swapping\na=%d\nb=%d\n",a,b);
    swap(a,b);//Pass by value
    printf("\nAfter Swapping\na=%d\nb=%d\n",a,b);   
    swapp(&a,&b);//Pass by reference
    printf("\nAfter Swapping\na=%d\nb=%d\n",a,b);
    return 0;
}
void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("after swapping (inside function\na=%d\nb=%d\n",x,y);
}
void swapp(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}