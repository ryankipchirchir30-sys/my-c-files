#include<stdio.h>
#include<string.h>
struct Player
{

    char name [12];
    int score;
};
int main(void)
{
      //  a collection related members (variables)
      //  they can be different data types
      //  listed in under one name in  a block of memory
      //  VERY SIMILAR to clasees in other languages ( but no methods)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "ryan");
    player1.score = 4;

    strcpy(player2.name,"kiai");
    player2.score = 5;


    printf("%s\n",player1.name);
    printf("%d\n",player2.score);
    printf("%s\n",player2.name);
    printf("%d\n",player2.score);
    
    return 0;
}