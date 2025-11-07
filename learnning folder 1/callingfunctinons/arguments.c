#include<stdio.h>
                 //calling the function
/*void birhtday(){
    printf ("\n happy birthday to you\n ");
    printf("happy birthday to you\n ");
    printf("happy birthday to you\n ");
    printf("happy birtday dear ryan happy birthday to you");

}
int main(){
 birthday();
 birthday();
 birthday();
*/
          // arguments
void birthday(char name[] , int age) {
    printf("\n happy birthday to you dear %s\n",name);
    printf(" you are now %d years old ",age);

}
int main (){

char name [] = "ryan";
int age = 20;

birthday(name, age);
return 0;
// functions cannot see inside other fuctions
}
