#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{

const int MIN = 1;
const int MAX = 100;
int guess;
int guesses;
int answer;

// uses the current time a seed
srand(time(0));

//generates a random number between min and max
answer =(rand() % MAX) + MIN;
//printf("%d",answer);


do{
    printf("enter a guess");
    scanf("%d",&guess);
 if(guess>answer){
    printf("too high try again");
 }
 else if(guess < answer){
    printf("too low");
 }
 else{
    printf(" you guessed the correct number");
 }
guesses++;

}
while(guess != answer);

printf("***********************");
printf("answer: %d\n",answer);
printf("guesses: %d\n");
printf("***********************");
    return  0;
}