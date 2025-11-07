#include<stdio.h>
#include<stdbool.h>
int main() {

//char a = 'A'; // this stores a single character 
//char b [] ="ryan"; // this stores an array of characters or a string 


//float c = 5.77687887676776776; // stores decimal vlaues with 4 bytes(meaning a 32 bit precision)6-7 significant digits %f
//double d = 5.7768788778766676; // stores decimal values with 8 bytes(meaning a 64 bit precision)15-16 significant digits %lf

             // data types in c language


//printf("%0.15f\n",c);
//printf("%0.15lf\n",d);


//bool e = true;// this stores values true or false in 1 byte %d format 
//printf("%d\n",e);
//unsigned char f = 253; // this unsigned char increases the range of positive values from (0 to 255) %d or %c
//printf("%d",f);
/* for signed varisbles we have a range of -127 to + 127 unsigned
variables have a rage of 0 to 255 */
//short int g = 32766; // 2 bytes storage of values(-32,768 to 32,767) %d
//unsigned short int h = 65535; // 2 bytes storage of values(0 to 65,535) %d
//int i = 2147483648; // 4 bytes storage of values(-2,147,483,648 to 2,147,483,647) %d
//unsigned int j = 4294967295; // 4 bytes storage of values(0 to 4,294,967,295) %d
//printf("%d\n",g);
//printf("%d\n",h);
//printf("%d\n",i);
//printf("%d\n",j);





//long long int k = 9223372036854775807; // 8 bytes storage of values(  negative quintiilion to positive quintillion) %lld
//unsigned long long int l = 18446744073709551615U; // 8 bytes storage of values(0 to 18 + Positive quantilion) %llu
//printf("%llu\n",l); // unsigned long long interger

          // format spercifiers% defones a type of data to be printed


       //char = %c
       //string (array of characters)
       //interger =%d
       // float = %f
       //double float = %lf 
       // long long interger defined by %lld
       // unsigned long long int=%llu
       // unsigned char defined by %c or %d
       // unsigned short int = %d
       
       // %.1 =decimal precision
       //%1= minimum field width right align
       //%- = left align

float item1 = 15.5;
float item2 = 10.2;
float item3 = 9.5;
 
//printf("item 1 : %6.2f\n",item1);
//printf("item 2 :%6.2f\n",item2);
//printf("item 3 :%6.2f\n",item3);


// constant is a fixed value that cannot be alterred by the the program during its execution

// const float PI= 3.14159;


//print("%f",PI);

     // arithmetic operations

     //addition(+)
     //subtraction(-)
     //multiplication(*)
     //division(/)
     //modulus(%) gives you the remainder of any division helpfull in findig if the number is even or odd
     // increment(++)
     // decrement(--)
//int x = 5;
//int y = 2;
//int z = x % y;
//double z = x /(float)y;
//x ++;
//y--;
//printf("%lf",z);
//printf("%d\n",x);
//printf("%d\n",y);

     // argument assignment operators= used to replace a statement where the operator takes a variable as
     // as one of its arguments and then assigns the result back to the same variable
     // x = x+1
     //x+= 1

//int x =10;
//x=x-3;
//x-=3;

//x=x+3;
//x+=3;

//x=x/5;
//x=5;
//x=x*4;
//x*=5;
//x%=2;



//printf("%d",x);
























    return 0;
}