#include<stdio.h>
#include<string.h>
#include<stdlib.h> // For malloc, realloc
#define max_subjects 10
#define max_students 100
struct STUDENTS
{
    char name[50];
    int numsubjects;
    double grade[max_subjects];
    double total_grade,average_grade;
    char status[10];
};

void get_student_data(struct STUDENTS *student); // Function prototype

void load_students(const char *filename,struct STUDENTS **students_ptr,
                   int *num_students_ptr,
                   int *capacity_ptr )
{
            //purpose
            //1. read the student data from the students.txt file
            //2.allocate space dynamically
            //3.updating pointer that stores all students and the student count and their capacity
FILE *pF = fopen(filename, "r");

if(pF != NULL) 
{
    printf("***************\n");
    printf("file is there comencing reading\n");
    printf("**************");
}
else
{
    printf("***************\n");
    printf("file is not there reading cannot take place");
    printf("***************");
    return;
}
    struct STUDENTS *students = *students_ptr;
    int numstudents = *num_students_ptr;
    int capacity = *capacity_ptr;
if(capacity == 0)
{
    capacity = 5; //this is the initial size
    students = malloc(capacity * sizeof(struct STUDENTS));
    if(students == NULL)
    {
        printf("memory allloction failed !!!\n");
        fclose(pF);
        return;
    }
    // this updates the real pointers
    *students_ptr = students;
    *capacity_ptr = capacity;
}
//this is now the reading loop that will read the file
printf("file opened sucessfully ready to read students ...\n");

while(1)
{
    struct STUDENTS temp;
    int read_error = 0; // Flag to break outer loop
    //this reads the students name 
    if(fscanf(pF,"%49s",temp.name)!=1)
    break;//this makes the program stops if there is no more names to check


    //this part of the program reads the number of subjects
    if(fscanf(pF,"%d",&temp.numsubjects)!=1)
    break;//this means the data is missing or the data is invalid

    // this reads the grade in the program
    temp.total_grade = 0;
    for(int i = 0;i< temp.numsubjects;i++){
        if(fscanf(pF,"%lf",&temp.grade[i])!=1) {
            read_error = 1; // Mark that an error occurred
            break;
        }
        temp.total_grade += temp.grade[i];
    }
    if (read_error) {
        break; // Exit while loop if grade reading failed
    }
    //then we calculate the average grade of the program
    temp.average_grade = temp.total_grade/temp.numsubjects;
    if(temp.average_grade >= 60)
    strcpy(temp.status,"PASSED");
    else
    strcpy(temp.status,"FAIL");

     // this part of the program if there is space and if the array is full it expands the array
     if(numstudents == capacity){
        capacity += 5;
        students = realloc(students,capacity*sizeof(struct STUDENTS));
        if(students == NULL ){
            printf("the reallocation has failed\n");
            fclose(pF);
            return;
        }
        // this updates the main pointer
        *students_ptr = students;
        *capacity_ptr = capacity;
     }
     //this stores the student 
     students[numstudents] = temp;numstudents++;

}
// this update the final value in the main function
*num_students_ptr = numstudents;
*capacity_ptr  = capacity;

fclose(pF); // Close the file when done reading
}
void add_new_students(struct STUDENTS **students_ptr,int *num_students_ptr, int *capacity_ptr)
{
       // purpose is to add new  students to a dynamic memory &updates memory if full
       struct STUDENTS *students = *students_ptr;
       int numstudents = *num_students_ptr;
       int capacity = *capacity_ptr;
       // this part of the code expands the memory if it is full
       if(numstudents == capacity)
       {
        capacity +=5;
        students = realloc(students,capacity *sizeof(struct STUDENTS));
        if (students == NULL)
        {
            printf("memory allocation failed and cannot add new students.\n");

            return;

        }
        *students_ptr = students;
        *capacity_ptr = capacity;
       }
       //this part of the students gets the new students data
       struct STUDENTS temp;get_student_data(&temp);
       // this stores the data in an array
       students[numstudents] =temp;numstudents++;
        // this updates the counters
        *num_students_ptr = numstudents;

}
void save_students(const char *filename ,struct STUDENTS *students,int num_students )
{
    FILE *pF = fopen(filename,"w");
    if(pF == NULL)
    {
        printf("error: file could not open for writing\n");
        return;

    }
    for(int i = 0;i < num_students;i++)
    {
        // this writes the name in the document
        fprintf(pF,"%s\n",students[i].name);
        // this writes the number of subjects
        fprintf(pF,"%d\n",students[i].numsubjects);
        // this writes the grades of each of the subjects
        for(int j = 0 ;j < students[i].numsubjects;j++)
        {
            fprintf(pF,"%.2lf",   students[i].grade[j]);
        }
        fprintf(pF,"\n");
    }
    fclose(pF);
    printf("\n---------------\n");
    printf("students have been saved successfully\n");
    printf("\n---------------\n");
}
          //purpose is to write all students to a file
void get_student_data(struct STUDENTS *student)// this is the foundation of the program 
{
    // purpose ask the user for all the nescessary data required to complete the program
    printf("enter the name of the student ? ");
    scanf("%49s",student->name);
    printf("enter the number of subjects");
    scanf("%d",&student->numsubjects);
if(student->numsubjects <= 0 || student->numsubjects > max_subjects)
{
    printf("you have entered an invalid value please re-enter");
    // To make it more robust, you could loop here until valid input is given.
    // For now, we'll just stop processing this student.
    student->numsubjects = 0; // Mark as invalid
    return;
}

    student->total_grade = 0;
for(int i = 0;i < student->numsubjects;i++ )
{
    printf("enter the grade for subject %d\n",i+1);
    scanf("%lf",&student->grade[i]);

if(student->grade[i] < 0 || student -> grade[i] > 100)
{
    printf("the grade you have entered is invalid please re-enter\n");
    i--;
    continue;
}

    student->total_grade += student->grade[i];
}
student->average_grade =student->total_grade/student->numsubjects;
if(student->average_grade >= 60)
strcpy(student->status,"PASSED");
else
strcpy(student->status,"FAIL");

}

void print_students(struct STUDENTS *students, int num_students)
{
    printf("\n---- STUDENT REPORT CARD ----\n");
    for (int i = 0; i < num_students; i++)
    {
        printf("Student: %s | Average: %.2f | Status: %s\n",
               students[i].name, students[i].average_grade, students[i].status);
    }
    printf("-----------------------------\n");
}

int main()
{
    struct STUDENTS *students = NULL;
    int num_students = 0;
    int capacity = 0;
    char filename[] = "C:\\Users\\Administrator\\Desktop\\students.txt";
    int choice;

    // Load existing students from file
    load_students(filename, &students, &num_students, &capacity);

    do {
        printf("\n--- Student Report Card Menu ---\n");
        printf("1. Display all students\n");
        printf("2. Add a new student\n");
        printf("3. Save and Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                print_students(students, num_students);
                break;
            case 2:
                add_new_students(&students, &num_students, &capacity);
                printf("New student added.\n");
                break;
            case 3:
                save_students(filename, students, num_students);
                printf("Data saved. Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    free(students); // Free the dynamically allocated memory
    return 0;
}
// this is where i left c programming at but i might return some day thank you c programming see you another day
