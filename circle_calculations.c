/*Pavan S Lal
ISP*/
#include<stdio.h>
#include<math.h>
#define PI 3.14
float diameter();
float area(float r);
float perimeter(float r);
int main()
{
    float d,r;
    float a,p;
    d=diameter();
    r=d/(2.0);
    a=area(r);
    p=perimeter(r);
    printf("\nThe diamter of the circle is %.2f",d);
    printf("\nThe radius of the circle is %.2f",r);
    printf("\nThe radius(converted to int) of the circle is %d",(int)r);
    printf("\nThe area of the circle is %.2f",a);
    printf("\nThe perimeter of the circle is %.2f",p);
    return 0;
}
float diameter()
{
    int x1,y1,x2,y2;
    printf("\nEnter the coordiantes to find diamter:\n");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}
float area(float r)
{
    return PI*r*r;
}
float perimeter(float r)
{
    return 2*PI*r;
}
