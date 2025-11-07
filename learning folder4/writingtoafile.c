#include<stdio.h>
int main()
{

    FILE *pF = fopen("C:\\Users\\Administrator\\Desktop\\ test.txt","a");// this determines the file format that is going to be made


    fprintf(pF,"\ntoa kichwa hapa");//this opens up our file
    
   fclose(pF);// this closes our file a the end

/*
if(remove("test.txt") == 0){
    printf("that file was deleted sucessfully");
}
else{
    printf("the file was not deleted");
}
*/
    return 0;
}