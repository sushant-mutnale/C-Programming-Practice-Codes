#include <stdio.h>
float a, b;
void add()
{
    printf("The Addition of Given Two No is = %f", a + b);
}
void sub()
{
    printf("The Substraction of Given Two No is = %f", a - b);
}
void multi()
{
    printf("The Multiplication of Given Two No is = %f", a * b);
}
void div()
{
    float c;

    printf("The Division of Given Two No is  = %.2f", a / b);
}
int main()
{
    int choice;
    do
    {
        printf("Enter Two numbers :");
        scanf("%f%f", &a, &b);
        printf("1.Addition\n");
        printf("2.substraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit \n");
        printf("Enter Your Choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            multi();
            break;
        case 4:
            div();
            break;
        default:
            printf("Thank You  ");
        }
        printf("\n");
        printf("*******************************************");
        printf("\n");
    } while (choice != 5);
}