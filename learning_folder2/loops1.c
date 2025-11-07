#include<stdio.h>
#include<string.h>
/*
int main()
{
// for loop = repeats  a section of code a limited amounts of times


// for (int i = 10/*this declares an index*/;// i>=1;/*this is the condition*/ i-=2/*increment or decrement*/ ) 
 //{
//printf("%d test\n",i);
 //}
     
//int main(){
 //while loop = repeats a section of code possibly unlimited times
 // WHILE some conditions remain true
 //  a while loop might not execute at all
 /*
 char name[25]; //this is assigning a character
 printf("what is your name ? :");
 fgets(name,25,stdin);     // fgets is used as it can also read spaces unlike scanf
 name[strlen(name)-1] = '\0';   

 while (strlen(name) == 0){   // checks if the value returned is true
    printf("you did not enter a name are you mad\n"); // repromps the user to  enter his name again
    
     printf("what is your name ? :");
     fgets(name,25,stdin);
     name[strlen(name)-1] = '\0';
     
 }
  printf("hello %s",name);
  */
 /*
int main()
{

 // while looop = checks a conditipn them executes a block  if condition is true
 //do while loop = always executes a block of code once then checks a condition

int num = 0 ;
int sum = 0;
do
{ 
  printf ("enter a number above 0:");
  scanf("%d",&num);

  if (num > 0)
  {
sum = sum + num ;

  }
 } while(num > 0);


printf("sum:%d",sum);
*/
int main ()
{
/*
//nested loop = a loop insida another loop
int rows;
int columns;
char symbol;



printf("enter the number of rows");
scanf("%d",&rows);
printf("enter the number of columns");
scanf("%d",&columns);
printf("enter a symbol to use: ");
scanf("%c",&symbol);
//printf("%c",symbol);
scanf("%c");

for(int i = 1; i <= rows; i++){// the outer loop is  incharge of keeping track of the rows

for(int j = 1; j<= columns;j++){//incharge of keeping the columns
  printf("%c",symbol);
}
printf("\n");
}*/

// continue = skips a program but continues executing the rest of the the program
//break = exits or iterates the program after the value.
for(int i = 1;i<=40;i++)
{
  if(i==13)
  {
    //continue;// continues the rest of the program
    break;// terminates the rest the program
  }


printf("%d\n",i);

}

















    return 0;
}
