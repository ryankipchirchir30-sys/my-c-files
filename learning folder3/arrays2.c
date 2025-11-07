#include<stdio.h>
#include<string.h>


void sort(char array[],int size)
{
for(int i=0; i < size -1 ; i++)
{

for( int j=0;  j < size-1;j++)
{
    if(array[j]> array[j+1])
    {
    int temp  = array[j];
    array [j] =array[j+1];
    array[j+1] = temp;

    }
}
}
}


void printArray(char array[], int size)
{
    for (int  i= 0;i< size;i++){
        printf("%c\n",array[i]);

    }
}
int main()
{
  

                   //SORTING AN ELEMENT OF AN ARRAY
    //int array [] = {1,2,4,3,6,5,8,7,10,9,};
    char array[] ={'F','D','B','A','C','E'}; 
    int size = sizeof(array)/sizeof(array[0]);

sort(array,size);    
printArray(array,size);
    return 0;
}
                //SWAPING VALUES OF TWO VARIABLE
//for characters
   // char x ='x';
    //char y ='y';
    //char temp;

    //temp = x;
   // x=y;
    //y=temp;
    //for strings
    /*
    char x [25]= "water";
    char y [25] = "wine";
    char temp[25];

    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);
     



    printf("x = %s\n",x);
    printf("y = %s\n",y);
 */