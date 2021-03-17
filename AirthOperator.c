//Program To calculate Addition Subtraction Multiplication Division
//Program Written By Aayat_136
#include<stdio.h>
int main(){
    //Declaring Variables....
    char op ;
    double a, b;
    printf("Enter an operator (+, -, *, /):\n");
    scanf("%c", &op);
    printf("Enter Ist operands:");
    scanf("%d",&a);
    printf("Enter 2nd operands:");
    scanf("%d",&b);
    //Using Switch CASE TO CHOOSE OPTIONS
    switch(op)
    {
        case '+':
            printf("%d + %d = %d",a, b, a+b);
            break;

        case '-':
            printf("%d - %d = %d",a, b, a-b);
            break;

        case '*':
            printf("%d * %d = %d",a, b, a*b);
            break;

        case '/':
            printf("%d / %d = %d",a, b, a/b);
            break;
        default:
            printf("Error encountered by the input values");
    }
    return 0;
}
