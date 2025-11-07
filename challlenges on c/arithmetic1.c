#include<stdio.h>
int main()
{
    char operator;
    double A;
    double B;
    double answer;

    printf("enter the operator yo want (+,-,/,*)");
    scanf("%c",&operator);
    printf("enter the number A : ");
    scanf("%lf",&A);
    printf("enter the number B : ");
    scanf("%lf",&B);


    switch(operator)
    {
        case '+':
        answer = A + B;
        printf("the answer is: %lf ",answer);
        

        case '-':
        answer = A - B;
        printf("the answer is: %lf ",answer);
        
        case '/':
        answer = A/B;
        printf("the answer is: %lf ",answer);
        
        case '*':
        answer =A*B;
        printf("the answer is: %lf ",answer);

        default:
        printf("this is not recognised as a valid operator");


    }

    return 0;

}