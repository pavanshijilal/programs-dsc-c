#include<stdio.h>
float add(float *p1,float *p2,float *result);
float sub(float *p1,float *p2,float *result);
float prod(float *p1,float *p2,float *result);
float quot(float *p1,float *p2,float *result);

int main()
{
    float a,b,result;
    printf("\nEnter two numbers:");
    scanf("%f%f",&a,&b);
    int choice;
    do
    {
        printf("\nMENU\n1.add\n2.subtract\n3.Product\n4.Quotient\n5.Exit\nEnter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\na+b =%f",add(&a,&b,&result));
                   break;
            case 2:printf("\na-b =%f",sub(&a,&b,&result));
                   break;
            case 3:printf("\na*b =%f",prod(&a,&b,&result)); 
                   break;
            case 4:
                   printf("\na/b =%f",quot(&a,&b,&result));
                   break;   
            case 5:printf("\nThank you for using the program\n");   
                   break;
            default:printf("\nWrong choice\n");       
        }
    }while(choice!=5);
    return 0;
}
float add(float *p1,float *p2,float *result)
{
    *result = *p1 + *p2;
    return *result;
}
float sub(float *p1,float *p2,float *result)
{
    *result = *p1 - *p2;
    return *result;
}
float prod(float *p1,float *p2,float *result)
{
    *result = *p1 * *p2;
    return *result;
}
float quot(float *p1,float *p2,float *result)
{
    *result = *p1 / *p2;
    return *result;
}
