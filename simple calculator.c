
#include <stdio.h>

int main()
{
    double num1,num2;
    char opr;
    printf("Enter operator: ");
    scanf("%c",&opr);
    printf("Enter 1st number: ");
    scanf("%lf",&num1);
    printf("Enter 2nd number: ");
    scanf("%lf",&num2);
    
    switch(opr){
        case '+':
            printf("%lf + %lf = %lf",num1,num2,(num1+num2));
            break;
        case '-':
            printf("%lf - %lf = %lf",num1,num2,(num1-num2));
            break;
        case '*':
            printf("%lf * %lf = %lf",num1,num1,(num1*num2));
            break;
        case '/':
            if(num2!=0.0){
            printf("%lf / %lf = %lf",num1,num2,(num1/num2));
            }else{
            printf("Undefined value");
            }
            break;
        default:
            printf("Please enter valid operator!");
    }
    
    return 0;
}



