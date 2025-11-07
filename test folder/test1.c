#include<stdio.h>
int main(){

    char operator ;
    double A;
    double B;
    double result;

     

    printf("enter a operator(+,-,*,/)");
    scanf("%c",& operator);




    printf("enter the number A: ");
    scanf("%lf", & A);
    printf("enter the number B:");
    scanf("%lf", & B);

     switch(operator){

        case '+':
        result = A + B;
        printf("the answer is:%lf ",result);
        
        case '-':
        result = A - B;
        printf("the answer is:%lf ",result);

        case '*':
        result = A * B;
        printf("the result is:%lf ",result);
        
        case '/':
        result = A/B;
        printf("the result is:%lf ",result);

        default:
        printf("this is not recognized as a operator");


















     }
    












return 0;
}