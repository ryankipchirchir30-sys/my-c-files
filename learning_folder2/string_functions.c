#include<stdio.h>
#include<string.h>
int main()
{
    char string1[]="Ryan";
    char string2[]="Riai";

//strlwr(string1);         //converts string to lowercase
//strupr(string1);         //converts string to uppercase
//strcat(string1,string2);         //appends string to to end of string 1
//strncat(string1,string2,1) ;   //appends n characters from string 2 to string1
//strcpy(string1,string2);       //copys string 2 to string 1
//strncpy(string1,string2,1);   // copys n characters of string 2 to string 1
//strset(string1,'.@');    //sets all characters of a given string to a given character
//strnset(string1,'B',1); //sets the first n characters to a given character
//strrev(string1);    //reverses a string
 //int result = strlen(string1);             //return string lenght as int 
 //int result = strcmp(string1,string2);  // string comparares all characters
 //int result = strncmp(string1,string2,1);  // string compares all n  characters
 int result = strcmpi(string1,string2);   // string compares all (ignores case)
 //int result = strnicmp(string1,string2,1);  // compares all n character and (ignores case)
printf("%d",result);


if (result == 0){
    printf("\nthis strings are the same");

}
else
{
    printf("\nthis strings are not the same");
}

return 0;
}