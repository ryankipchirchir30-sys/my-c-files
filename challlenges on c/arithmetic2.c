#include<stdio.h>
int main()
{

char operator;
double  A;
double B;
double answer;

printf("enter an operator(+,-,/,*)",operator);
scanf("%c",&operator);

printf("enter the number A :");
scanf("%lf",& A);

printf("enter the number B");
scanf("%lf",&B);


if (operator == '+')
{
    answer = A + B;
    printf("the answer is %.2lf",answer);

}
 
 else  if (operator == '-')
{
    answer = A-B;
    printf("%.2lf",answer);
}
 else if(operator == '/')
{
    answer = A/B; 
    printf("%.2lf",answer);


}
 else if (operator == '*')
{
    answer = A * B;

    printf("%.2lf",answer);
}



else
{
    printf("you habe entered an incorrect operator please enter another valid operator");
}




    return 0;
}