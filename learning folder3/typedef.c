#include<stdio.h>
//typedef char user[25];
/*
typedef struct user
{
    char name[25];
    char password[12];
    int id;
}user;
int main()
{
  //typedef = reserved keyword that gives an existing data type  a nickname

   struct user user1 ={"ryan","password123",123456789};
   struct user user2 ={"ryan","password321",987654321};

   
   printf("%s\n",user1.name);
   printf("%s\n",user1.password);
   printf("%d\n",user1.id);


   printf("%s\n",user2.name);
   printf("%s\n",user2.password);
   printf("%d\n",user2.id);



    return 0;
}
    */

                //ARRAY OF STRUCTS
struct student
{
    char name[12];
    float gpa;
};

int main()
{
    struct student student1 = {"terryl",5.0};
    struct student student2 = {"giphan",4.0};
    struct student student3 = {"kipngeno",3.0};
    struct student student4 = {"ashley",2.0};

    struct student students[] = {student1, student2, student3, student4};
    
    for(int i = 0; i<sizeof(students)/sizeof(students[0]);i++)
    {
        printf("%-12s\t",students[i].name);
        printf("%.1f\n",students[i].gpa);
    }
    return 0;
}




