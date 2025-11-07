#include<stdio.h>
int main()
{
    int age ;
    char name [25];
    printf("what is your name young man? ");
    fgets(name,25,stdin);
    printf("hello %s",name);




    return 0;
}