#include<stdio.h>
int main()
{
    int subject;
    float total=0.0;
    float grade;
    float gpa;

    printf("enter the number of subject you are doing: ");//asks the user to enter the number of subject being done
    scanf("%d", &subject);
    // this is the basic validation to ensure the number of subjects entered are correct
if (subject <= 0 )
{
    printf("the number of subjects that you have entered are invalid please try again");
    return 1;
}
for(int i = 1;i <= subject;i++)
{
    printf("enter the grade of the subject: ");
    scanf("%f", &grade);

    if(grade < 0 || grade > 100)
    {
        printf("the grade you have entered is invalid please enter a valid grade");
        i--;
        continue;
    }
    total += grade; 
}
// calculating th average grade
    gpa =total/subject;
printf("%.2f",gpa);

if(gpa <= 30)
{ 
    printf("you failed this test now you have to redo it");
}
else if(gpa >=30 && gpa <=60 )// this creates a range of value 
{
    printf(" you fairly passed this semester");
}
else if (gpa > 61)
{
    printf("you passed this semester with flying colors");

}



    
    



    return 0;
}