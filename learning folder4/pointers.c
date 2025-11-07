#include<stdio.h>

void printAge(int *pAge )
{
  printf("you are %d years old",*pAge);
}


int main(){
  //pointer = "variable- like"reference that holds a memory address to another variable ,arrays etc
  //           some  tasks are performed more easily with pointers
  //            * =indirection operator (value at address)
int age = 18;
int *pAge = &age;// this is now declaring the pointer which is the same data type as the interger age  


//printf("address of age:%p\n", &age);//this dispayt the address of age
//printf("value of pAge:%p\n",pAge);//this  displays the value of age

//printf("value of age: %d\n",age);
//printf("value at stored address:%d\n",*pAge);// we are derefferencing the value from the adress of the previous pointer

//printf("size of age:%d bytes\n",sizeof(age));
//printf("size of pAge:%d\n",sizeof(pAge));

printAge(pAge);


    return 0;
}