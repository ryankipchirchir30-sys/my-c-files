#include<stdio.h>
int main()
{
  // memory = an array of bytes within RAM (street)
  //memory block = a single unit of (byte) within memory,used to hold some value(person)
  //memory adress = the adress where a memory  block is located (house address)
char a ;
 char b[3];
 

printf("%dbytes\n",sizeof(a));//each of these uses up 1 byte of memory
printf("%dbytes\n",sizeof(b));


printf("%p\n",a);
printf("%p\n",b);//shows the memory used in hedecimal


    return 0;
}