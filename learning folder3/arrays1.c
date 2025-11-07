#include<stdio.h>
#include<string.h>

int main(){
/*
{
    // array  = is a data structure that can store many values of the same data type
    double price[] = {5.0,10.0,15.0,20.0,25.0};// this data type is now turned into an array
    printf("$%.2lf",price[4]);
*/
// PRINTING AN ARRAY WITH LOOPS
/*
double prices [] = {5.0 ,10.0,15.0, 20.0,25.0,30.0};
//printf("%lf",prices);// loops helps in reducing repetition of programs if we wante dto print all the data in the array


//printf("%d in bytes",sizeof(prices) );




for(int i =0; i < sizeof(prices)/sizeof(prices[2]);i++)
{
printf("%.2lf\n",prices[i]);


}

*/

// 2D ARRAY 
// sd array = an array where each element is an antire array
//            useful if you need a matrix,grid,or table of data
 /*int numbers [2] [3]= {
                     {1,2,3},
                     {4,5,6}
                     };
*/
/*
int numbers [6][6];
int rows = sizeof(numbers)/sizeof(numbers[0])  ;
int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

printf("rows: %d\n",rows);
printf("columns: %d\n",columns);
numbers[0][0] =1;
numbers[0][1] =2;
numbers[0][2] =3;
numbers[1][0] =4;
numbers[1][1] =5;
numbers[1][2] =6;
numbers[2][0] =7;
numbers[2][1] =8;
numbers[2][2] =9;


for (int i = 0; i <2;i++)
{
    for(int j =0 ; j <3 ;j++)
    {
        printf("%d ",numbers[i][j]);
    }
    printf("\n");
}

    return 0;
}
*/
            // ARRAY OF STRINGS
  char cars[][10] = {"mustang","corvette","camaro"};

  //cars[0] = "camaro";
  strcpy(cars[0], "tesla"); //this us used to edit or add another value that was not  there

for (int i = 0; i<sizeof(cars)/sizeof(cars[0]);i++)
{
    printf("%s\n",cars[i]);
}


  return 0;
}