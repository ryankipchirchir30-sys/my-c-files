#include<stdio.h>
void hello(char[],int); // this is the function prototype
int main()
{
/*A function prototype is a function declaration without a  body before we declare the main function
ensure that the calls to a function are made with the correct argument otherwise the compiler returns 
an error instead of a warning.*/

//ADVANTAGES OF THE FUNCCTION PROTOTYPE BEING AT THE TOP
//easier to navigate a program
//helps with debugging 
// commonly used in header files

char name[]= "ryan";
int age = 19;

hello (name,age);
return 0;
}
void hello (char name[],int age)
{
printf("hello %s",name);
printf("\nyou are %d years old",age);
}