#include<stdio.h>
int main()
{
       FILE *pF = fopen("C:\\Users\\Administrator\\Desktop\\kawasaki specs.txt","r");// this opens up our file back there in the desktop

    char buffer[255];// this hold one line of our text document at a time as an array
    //fgets(buffer,255,pF);
    //printf("%s",buffer);


    if(pF != NULL)
    {
        printf("**************\n");
        printf("file is there commencing reading\n");
        printf("***************\n");

    }
    else{
        printf("*******************\n");
        printf("file is not there therefore an invalid file cannot be read\n");
        printf("********************\n");
    }








   // to read the whole text file  we will enclose each of the statements in a while loop
   while(fgets(buffer,255,pF) != NULL)// if fgets will not return null then the program will continue to print the rest of the statements
   {
    printf("%s",buffer);

   }


    fclose(pF);
    return 0;
}