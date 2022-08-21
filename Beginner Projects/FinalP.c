#include <stdio.h>

int squared();
int multiplication();
int addSubDiv();

int main()
{
    char A = 0; //square or multi
    char a = 0;
    char decision =0;

    printf("Welcome to the Basic Calculator program!\n");
    printf("You wanna use Square&MultiplicationTable(X) or Addition,Subtraction&Division(Y)? \n");
    scanf(" %c",&decision);

    if (decision == 'X'){

        printf("Square(S) or Multiplication Table(M)?: ");
        scanf(" %c",&A);

        while (a!='N'){
            if (A=='S'){
                squared();
                }

            else if(A=='M'){
                multiplication();
            }
            else {
                printf("Please Enter 'S' for square or 'M' for Multiplication Table.\n");
                break;
                }


        printf("Do you wanna continue?(Y/N) ");
        scanf(" %c",&a);

        }
        printf("Thank you for using the Calculator.");
            return 0;
        }

    else if(decision == 'Y'){
        addSubDiv();

    }
    else {printf("Please enter Valid character");
        }
}
        int squared()
        {
            int x=0;
            int result=0;

            printf("Type any number you want to square : ");
            scanf("%d",&x);

            result = x*x ;
            printf("%d squared is %d.\n",x,result);

            return 0;


        }


        int multiplication()

        {

            int input;
            int i;
            int a;

            printf("Enter any number: ");
            scanf(" %d",&input);

            for (i=0;i<=12;i++)
                {
                printf("%dx%d=%d.\n",input,i,input*i );

        }
        }
        int addSubDiv()
{
    int a=0;
    int b=0;
    char choice=0;
    int result=0;

    printf("Please enter your choice\n");
    printf("a. Addition\nb. Subtraction\nc. Multiplication\nd. Division : \n");
    scanf(" %c", &choice);


   printf("Please enter 2 integer numbers\n");
   scanf("%d %d", &a, &b);


    switch(choice)
    {
        case 'a':
            result = a+b ;
            printf("%d + %d = %d.\n", a, b, result);
                break;

        case 'b':
            result = a-b ;
            printf("%d - %d = %d\n", a, b, result);
                break;

        case 'c':
            result = a*b ;
            printf("%d x %d = %d\n", a, b, result);
            break;

        case 'd':
            if( b != 0)
                printf("%d / %d = %d.\n", a, b, (a/b));
            else
                printf("Number can't be divided by 0.\n");
            break;

            default:
                printf("You have entered the wrong choice.\n");
                break;
    }
    printf("Thank you for using the Calculator.");
    return 0;
}


