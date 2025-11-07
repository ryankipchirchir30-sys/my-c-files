#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main() { 


        // USER INPUT
/*        
char name [25] ;//bytes
int age;
printf("what is your name? ");
//scanf("%s",&name);

fgets(name,25,stdin);



printf("how old are you? ");

scanf("%d", &age);// scanf is used to take output from the user
printf("hello %s",name);
printf("you are %d years old", age);// this prints the scanf value plus the interger value
*/
                                // MATHEMATHICAL FUNCTIONS
/*
                     double A = sqrt(9);// finds the square root of any number 
                     double B =pow(2,4); // finds the power of numbers
                     int C = round(3.14259);// rounds off a decimal number to the nearest whole number
                     int D = ceil(3.14);// rounds off a decimal number to the nearest number above it
                     int E = floor(3.99); // rounds off a decimal number to the nearest number below it
                     double F = fabs(-100);// finds the value of which the number is awawy from zero
                     double G = log(3);// finds the logarithm of a number
                     double H = sin(45);// finds the sine of a number
                     double I = cos(45);// finds the cosine of a number
                     double J = tan(45);// finds the tangent of a number

                     printf("%lf",J);
*/  
              //  CALCULATING THE CIRCUMFERENCE OF A CIRCLE
/*
       const  double PI =3.14159;
       double radius;
       double circumference;
       double area;



printf("enter the radius of the circle ");
scanf("%lf",&radius);

circumference = 2  *PI  * radius;
area = PI * radius * radius ;
printf("circumference: %lf",circumference);
printf("\narea %lf",area);
*/
/*double A;
double B;
double C;
printf("enter the lenght of side A ");
scanf("%lf",&A);
printf("enter the lenght of side B ");
scanf("%lf",&B);


C = sqrt(A*A + B*B);

printf("side C : %lf",C); */


                           // IF STATEMENTS
/*int age ;
printf("enter your age ? ");
scanf("%d",&age);

         if (age >= 18){
            printf("you are signed in !!");

         }



            else if (age < 0){
                printf ("you are starting to be gay");

            }

            else if (age == 0){

                printf("you were just born and you dey want to sign up");
            }



         

        else{
            printf("you are not signed up !!");
         }*/


                        // SWITCHES THIS ARE USED TO REMOVE MANY "ELSE IF" STATEMENTS BY CREATING A CASE SCENARIO FOR EACH VALUE
                     
/*
        char grade;
        printf("Enter a letter grade ? ");
        scanf("%c",&grade);

        switch (grade){
           case 'A':
             printf("perfect keep up the good work");  
             break;
           case 'B':
             printf("you did good");
             break;
           case 'C':
             printf("you did somehow well");  
             break;
           case 'D':
             printf("at least its not an F");
             break;
           case 'F':
             printf("you supposed to be a dinner man serving food to the students");
             break;
           default:// works as an else statement if none of the values above match
             printf("enter only valid letter grades!!");
             
/* functions of the braks is for  us to exit the switch otherwise other statements will be printed that
are not supposed to be include after selecting the  needed character

        } 
        */
             // TEMPERATURE CONVERTER PROGRAM

             char unit;
             float temp;
             
             

             printf("is the temperature in (k) or in (C)?: ");
             scanf("%c", &unit);
             unit = toupper (unit);
             if(unit == 'C'){
                printf("Enter the temperature in C");
                scanf("%f", &temp);
                temp = temp + 273;
                printf("the temp in k is%.1f",temp);


             }

             else if (unit == 'K'){
             printf("enter the temperature in k");
             scanf("%f", &temp);
             temp = temp - 273;
             printf("the temperature in c is %.1f:",temp);

            }


             else {
                printf("\n%c is not a valid input ",unit);
             }









    return 0;

}
