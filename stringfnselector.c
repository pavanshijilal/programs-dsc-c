/*pavan S Lal
ISP*/
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50], s2[50], r[100];
    int choice;

    do{
        printf("\nEnter your choice");
        printf("\n1.Length\n2.Copy\n3.Compare\n4.Join\n5.Substring\n6.Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter string: ");
                scanf(" %[^\n]",s1);
                printf("Length = %lu",strlen(s1));
                break;

            case 2:
                printf("Enter string: ");
                scanf(" %[^\n]",s2);
                strcpy(s1,s2);
                printf("s1 = %s\ns2 = %s",s1,s2);
                break;

            case 3:
                printf("Enter string1: ");
                scanf(" %[^\n]",s1);
                printf("Enter string2: ");
                scanf(" %[^\n]",s2);

                if(strcmp(s1,s2)==0)
                    printf("Strings are same");
                else
                    printf("Strings are different");
                break;

            case 4:
                printf("Enter string1: ");
                scanf(" %[^\n]",s1);
                printf("Enter string2: ");
                scanf(" %[^\n]",s2);

                strcpy(r,strcat(s1,s2));
                printf("Joined string = %s",r);
                break;

            case 5:
                printf("Enter string1: ");
                scanf(" %[^\n]",s1);
                printf("Enter substring: ");
                scanf(" %[^\n]",s2);

                if(strstr(s1,s2)!=NULL)
                    printf("Substring found");
                else
                    printf("Not found");
                break;
        }

    }while(choice!=6);

    return 0;
}