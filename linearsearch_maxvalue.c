#include<stdio.h>
void lin_search(int a[],int n);
void maxvalue(int a[],int n);
int main()
{
    int a[100],n;
    int i;
    printf("\nEnter the number of elements of array:\n");
    scanf("%d",&n);
    printf("\nEnter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    int choice;
    do
    {
          printf("\nMENU\n2.Linear Search\n2.Max value of array\n3.Exit\nEnter the choice:\n");
          scanf("%d",&choice);  
          switch(choice)
          {
            case 1:lin_search(a,n);
                   break;
            case 2:maxvalue(a,n);
                   break;
            case 3:printf("\nThanks for using the program");      
                   break;
            default:printf("\nInvalid choice");
          }
    }while(choice!=3);
    return 0;
}
void lin_search(int a[],int n)
{
    int search,f=0;
    printf("\nEnter the value to search:");
    scanf("%d",&search);
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("\nValue found at %d th index position of array\n",i);
            f++;
            break;

        }
    }
    if(f==0)
    {
        printf("\nValue not found in array");
    }

}
void maxvalue(int a[],int n)
{
    int max;
    int i;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\nThe maximum value in the array is %d",max);
}
