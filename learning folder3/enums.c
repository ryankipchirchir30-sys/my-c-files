#include<stdio.h>

enum Day{sun=1,mon=2,tue=3,wed=4,thur=5,fri=6,sat=7};

int main()
{

      //enums = a user defined type of named interger identifiers
      //helps to make a program more readable
      enum Day today = sun;

      //printf("%d",today);//enums are  NOT STRINGS but  they are treated as intergers
      

      if(today ==sun || today==sat)
      {
        printf(" its the weekend time to party!!!!!!!\n");
    
      }
      else
      {
        printf(" dang it its working days i have to work\n");
      }
  
    return 0;
}