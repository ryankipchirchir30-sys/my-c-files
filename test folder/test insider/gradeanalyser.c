#include<stdio.h>
int main()
{
int numstudents;
int numsubjects;
double total;
double grade[25];
double gpa;

printf("enter the number of students you want to analyse ? \n");
scanf("%d",&numstudents);
printf("enter the number of subjects the student does ? \n");
scanf("%d",&numsubjects);

if(numstudents <= 0 || numsubjects <= 0)
{
    printf("the data you are trying to input is invalid please try again!!\n");
    return 1;
    
}
for(int i = 1 ;i <= numstudents;i++)
{
    total = 0;
    for(int j = 1;j <= numsubjects;j++)
    {
        printf("enter the grade for subject %d: \n",j);
        scanf("%lf", &grade[j]);
if (grade[j] < 0 || grade[j] > 100)
{
    printf("the grade you have entered above is invalid please retry");
    j--;
    continue;
}



        total += grade[j];
    }
gpa =total/numsubjects;
printf("the average grade for student%d is : %.2lf\n",i,gpa);

if(gpa < 30)
{
    printf("you have failed this semester therefore you have to repeat");
} 
else if(gpa >30 && gpa < 60)
{
    printf("you have fairly passed this semester");

}
else if(gpa > 60)
{
    printf("you have passed this semester with flying colors");
}


}


    return 0;
}