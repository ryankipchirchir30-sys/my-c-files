#include<stdio.h>
#include<ctype.h>
int main()
{
    char questions [][100] = {"1. what is the fastest superbike in the world as at now",
                              "2. what gives the bike its power",
                               "3. what is the top speed of the bike as at the year 2024"};
    
    char options[][100] ={"A. kawasaki zx4R","B. kawasaki zx10R","C. suzuki","D. kawasaki H2R",
                          "A.super charger","B.turbo","C.naturally aspirated", "D.nitrous",
                           "A. 200","B. 300","C. 400","D. 350"};
    char answers[3] = {'D','A','C'};
    int numberofquestions = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0; 
    
    printf("****QUIZ GAME****\n");

for(int i=0; i<numberofquestions; i++){
    // DISPLAYING THE QUESTIONS HAPPENS HERE
    printf("*******************\n");
    printf("%s\n",questions[i]);
    printf("********************\n");

// PRINTNG NOW THE OPTIONS USING A NESTED LOOPS
for(int j = (i * 4);j  < (i * 4) + 4;j++){
    printf("%s\n",options[j]);
}

printf("guess: ");
scanf("%c",& guess);
scanf("%c");// clears an \n from input buffer or use space in the first scanf like this("%c", &guess)

guess = toupper(guess);
if (guess == answers[i] ){
    printf("CORRECT ANSWER\n");
        score++;
        
}
else
{
    printf ("WRONG ANSWER PLEASE TRY AGAIN \n");
}

} 
printf("*******************\n");
printf("FINAL SCORE: %d/%d\n",score,numberofquestions);
printf("*******************\n");
    return 0;
}