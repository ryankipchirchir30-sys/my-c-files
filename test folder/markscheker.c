#include<stdio.h>
int main()
{
    
    double math ;
    double science ;
    double english;
    float average ;
    
    printf("enter your math grade?\n");
    scanf("%lf",&math);
    printf("enter your science grade ?\n");
    scanf("%lf",&science);
    printf("enter your english grade?\n ");
    scanf("%lf",&english);
   average =  (math + science + english)/3;
   
    // making of the if statements
if (average >=70 && average <= 100  ){
    printf("you passed with flying colors with an average%.2f",average);

}
else if (average >=20 && average <=69 ){
    printf("you fairly passed with an average %.2f keep u with the good work",average);


}
else if (average >=0 && average <= 19 ) {
    printf("you failed terribly you will repeat the next semester you had a n average of %.2f",average);
}
else{
    printf("the value you entered does not exit please enter a valid value"); 
}
     
return 0;
}