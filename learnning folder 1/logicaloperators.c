#include<stdio.h>
#include<stdbool.h>
int main(){
// logical operators include = &&(AND) checks if two conditions are true "this also includes the or logic"=||
// the or logic checks if atleast one of the two conditions are  true
/*
float temp = 26;
bool sunny = true;

if (temp >=0 && temp <= 37 && sunny){
    printf ("the weather is good!");
}
else {
    printf("the weather is bad!");
}
*/
/*
float temp = 26;

if (temp <=0 || temp >= 37 ){
    printf ("the weather is bad!");
}
else {
    printf("the weather is good!");
}
*/

// NOT logical operator = ! reverses the state of the condition

bool sunny = true; 
if (!sunny){
printf ("its cloudy outside!");
}
else {
    printf("its sunny outside ");

}


return 0;
}