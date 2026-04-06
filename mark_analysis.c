/*Pavan S Lal 
ISP*/
#include<stdio.h>
float largest(float x,float y,float z);
float smallest(float x,float y,float z);
void average(float x,float y,float z);
int main()
{
    float a,b,c;
    float l,s;
    printf("\nEnter the marks obtained in three subjects:\n");
    scanf("%f%f%f",&a,&b,&c);
    l=largest(a,b,c);
    s=smallest(a,b,c);
    average(a,b,c);
    printf("\nLargest mark = %.2f",l);
    printf("\nSmallest mark = %.2f",s);
    return 0;
}
float largest(float x,float y,float z)
{
    if(x>y)
    {
        if(x>z)
        {
            return x;
        }
        else
            return z;
    }
    if(y>z)
    {
        return y;
    }
    else
        return z;
}
float smallest(float x,float y,float z)
{
    if((x<y)&&(x<z))
    {
        return x;
    }
    else if(y<z)
    {
        return y;
    }
    else
        return z;
}
void average(float x,float y,float z)
{
    float average;
    average=(x+y+z)/(3.0);
    printf("\nAverage = %.2f",average);
}
