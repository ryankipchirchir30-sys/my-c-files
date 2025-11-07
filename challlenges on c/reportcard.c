#include<stdio.h>
int main()
{
    int numstudents;
    int numsubjects;
    double total;
    double grade[25];
    float gpa;
    
    printf("enter the number of students you want  to process : \n");
    scanf("%d", &numstudents);
    printf("enter the number of subjects done by the student : \n");
    scanf("%d", &numsubjects);

if(numstudents < 0 || numsubjects < 0)
{
    printf("an invalid number of students or subjects has been entered please check again and retry\n");
    return 1;
}    
for(int i = 1; i <= numstudents;i++)
{
    total = 0;

for(int j =1;j <= numsubjects;j++)
{
   
    printf("enter the grade for the subject %d: ",j);
    scanf("%lf",&grade[j]);
      if(grade[j] < 0 || grade[j] > 100 )
    {
        printf("the grade you have entered is an invalid grade please re-enter");
        j--;
        continue;
    }
    total += grade[j];
} 
gpa = total/numsubjects;  



printf("the grade point average for student %d : %.2f \n",i,gpa);

if (gpa < 30 )
{
    printf("you have failed the semester thefore you have to repeat this year student%d\n",i);
    continue;
}
else if (gpa > 30 && gpa < 70)
{
    printf("you have fairly passed the semester student%d\n ",i);
    continue;
}
else if(gpa > 70)
printf("you have passed this semester with flying colors student%d\n",i);
continue;

}



    return 0;
}