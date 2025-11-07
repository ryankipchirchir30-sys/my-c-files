#include<stdio.h>
#include<string.h>
// we start by defining the the maximum numbers
#define max_students 100
#define max_subjects 10
// this structs holds all if not some of the data we are going to use in the program
struct students// generally this struct holds all the student data types that we are going to use.
{
    
    char name[50];// stores the name of the students
    int numsubjects;//stores the number of subjects done by the student
    double grade[max_subjects];// this holds the grade for the  maximum subjects done
    double total_grade,average_grade;//holds the average value of the grades
    char status[10];//the status of the students which is either a pass or a fail.
};

 void students_data(struct students *s,int numsubjects)// this is the function that holds the students data
{
    printf("enter the name of the student\n");//using a pointer we ask for the students name
    scanf("%49s",s->name);//this prevents buffer overflow by introducing the 49
    printf("enter the number subjects of the student? \n");
    scanf("%d",&s->numsubjects);
    
    

    s->total_grade=0;// makes the total to start from 0
for(int i = 0;i < s->numsubjects;i++)// we loop to claculate the total grade and find the average
{
    printf("enter the grade for subject %d\n",i+1);
    scanf("%lf",&s->grade[i]);
if(s->grade[i] <0 || s-> grade[i] > 100)
{
    printf("the grade above you have entered is invalid please re-enter it\n");
    i--;
    continue;
 
}
    s->total_grade += s->grade[i];

}
    s->average_grade = s->total_grade/s->numsubjects;
    if(s->average_grade >= 50)
    strcpy(s->status,"pass");//using a string we determine the status if its a pass or a fail
    else
    strcpy(s->status,"fail");
}


int main()

{
int n;
    printf("enter the number of students\n");
    scanf("%d",&n);
    if(n <= 0 || n > max_students){
        printf("the number of student you have enterr is invalid please re-enter\n");
     return 1;    
}
     
    struct students s[max_students];

for(int i = 0;i < n;i++)
{
    printf("entering dat for student %d\n",i+1);
    students_data(&s[i],max_subjects);
}    

    printf("\n---- RESULTS ----\n");
for(int i =0; i < n; i++){
    printf("student: %s |Average: %.2lf |status: %s \n",s[i].name,s[i].average_grade,s[i].status);
}
    

    return 0;
}
