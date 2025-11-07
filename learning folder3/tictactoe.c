#include <stdio.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>

char board[3][3];
const char PLAYER ='X';
const char COMPUTER ='O';


void resetboard();
void computermove();
void playermove();
void printboard();
int checkfreespaces();
char checkwinner();
void printwinner(char);







int main()
{
    char winner = ' ';

    resetboard();
    while(winner = ' ' && checkfreespaces != 0 )
    { 
        printboard();

        playermove();
        winner= checkwinner();
        if(winner !=' ' || checkfreespaces == 0)
        {
            break;
        }
        computermove();
        winner= checkwinner();
        if(winner !=' ' || checkfreespaces == 0)
        {
            break;
        }

    }
    printboard();
    printwinner(winner);
    


    return 0;
}
void resetboard()
{
    for(int i = 0; i<3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] =' ';
        }
    }
    




}
void computermove()
{
    // we need to create a seed based on the current time 
    srand(time(0));
    int x;
    int y;
    if (checkfreespaces > 0)
    {
        do
        {
           x=rand()% 3;
           y = rand()%3; /* code */
        } while (board[x][y !=' ']);
        

    }
    else
    {
        printwinner (' ');

    }

}
void playermove()
{
    int x;
    int y;
    do
    {
       printf ("enter a row number 1-3");
        scanf("%d",x);
        x--;
        
        printf("enter a row number 1-3");
        scanf("enter a column number");
        y--;

        if(board[x][y] !=' ')
        {
        printf("invalid move my g you dey play too much!!!!");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }  
    } while(board[x][y] != ' ');



    

}
void printboard()
{
    printf(" %c | %c | %c ",board[0][0],board[0][1],board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",board[1][0],board[1][1],board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",board[2][0],board[2][1],board[2][2]);
    printf("\n---|---|---\n");
    printf("\n");




}
int checkfreespaces()
{
    int freespaces = 9;

    for(int i = 0;i < 3; i++)
    {
        for(int j = 0 ;j < 3;j++)
        {
            if (board[i][j] != ' ')
            {
                freespaces--;

            }
        }
        return freespaces;
    }
    

}
char checkwinner()
{
    // on this part of the program we are checking for the rows
    for(int i =0;  i<3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0]== board[i][2])
        {
            return board[i][0];

        }
        //this will check the possibility of a match in hte columns 
        if (board[0][i] == board[1][i] && board[0][1]== board[2][i])
        {
            return board[0][i];
        
        }
         //this will check the possibility of a match along the first diagonal
        if (board[0][0] == board[1][1] && board[0][0]== board[2][2])
        {
            return board[0][0];
        
        }
        // this will checj for a possibility along the second diagonal
        if (board[0][2] == board[1][1] && board[0][2]== board[2][0])
        {
            return board[0][2];
        
        }
        

        return ' ';

    }


}
void printwinner(char winner)
{
    if (winner == PLAYER){
        printf("you win my g");
    }
    else if (winner == COMPUTER)
    {
        printf("you lose ");
    }
    else
    {
        printf("its a tie");
    }

    

}