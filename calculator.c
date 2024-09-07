//here we are ,ready to make an calculator
//we will be using switch statement 

#include<stdio.h>
int main(){
    char operator;
    double num1;
    double num2;
    double result;
    //what the error we did was not initilazing the correct data type
    //that was your  error bcos you declared a float var but called a double 
    

    printf("\n enter the operation(+ - * /)");
    scanf("%c",&operator);
    printf("\n enter num1:");
    scanf("%lf",&num1);
    printf("\nenter num2:");
    scanf("%lf",&num2);

    switch (operator)
    {
    case '+':
        result=num1+num2;
        printf("the result is :%lf",result);
        break;

    case '-':
        result=num1-num2;
        printf("the result is :%lf",result);
        break;

    case '*':
        result=num1*num2;
        printf("the result is :%lf",result);
        break;

    case '/':
        result=num1/num2;
        printf("the result is :%lf",result);
        break;
    
    default:
    printf("%c is not valid operator",operator);
        
    }
    return 0;
}