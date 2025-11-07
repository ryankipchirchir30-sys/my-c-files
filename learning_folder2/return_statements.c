#include <stdio.h>
//return statement returns a value back to a calling function.
/*double square(double x) {
    double result  = x * x;
    return result;
}
int main(){
    double x = square (25);
    printf("%.2lf",x);

    return 0; //exut status when the program runs successfull
}*/
             //tenary operator = shortcut to if/else when assigning/returning a value
             //(condition)?value if true : value if false
int findmax (int x, int y){

return (x > y) ? x : y;
}
int main (){

    int max = findmax (2,4); //finds the maximum value of the interger
    printf("%d",max);
    return 0;
}            