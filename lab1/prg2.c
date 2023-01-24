/*
WAP to input name, roll number and marks in 5 subjects for n number of students. Write functions to:-
	a. Find total marks and percentage of all n students.
	b. Display details of a student with a given roll number.
	c. Display the details for all the students having percentage in a given range.
	d. Sort the array in ascending order of marks.
*/

#include  <stdio.h>
#include  <stdlib.h>

struct marks 
{
    char name[50];
    int roll;
    float mark[5];
    float total;
    float percentage;
};
void input(struct marks student[100],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the name of the student \n");
        scanf("%s", student[i].name);

        printf("Enter the roll number of the student \n");
        scanf("%d",&student[i].roll);

        printf("Enter the marks out of 100 of the student in five subjects \n");
        for(int j=0;j<5;j++)
        {
        scanf("%f",&student[i].mark[j]);
        }
    }
}


void sum(struct marks student[100],int n)
{
    for(int i=0;i<n;i++)
    {
        student[i].total=0;
        for(int j=0;j<5;j++)
            student[i].total=student[i].total+student[i].mark[j];
    }
}

void percent(struct marks student[100],int n)
{
    for(int i=0;i<n;i++)
    {
        student[i].percentage=(student[i].total)/500*100;
    }
}

void display(struct marks student[100],int  n)
{
    int rangel; //lower value of range
    int rangeu; //upper value of range

    printf("Enter the lower value of the range of the percentage \n");
    scanf("%d",&rangel);

    printf("Enter the upper value of the range of the percentage \n");
    scanf("%d",&rangeu);

    int count=0;
    printf("The students who got marks within the range are \n");
    for(int i=0;i<n;i++)
    {
        if(student[i].percentage >= rangel && student[i].percentage <= rangeu)
        {
            printf("The name of the student is %s \n",student[i].name);
            printf("The roll number of the student is %d\n",student[i].roll);
            printf("The marks of the student in five subjects are\n");
            for(int j=0;j<5;j++)
            {
                printf("%f \n",student[i].mark[j]);
            }
            
            printf("The total marks of the student is %f\n",student[i].total);
            
            printf("The perecentage number of the student is %f\n",student[i].percentage);

            count++;
        }
    }

    if(count==0)
        printf("none");
}
void  main()
{
    int n;
    printf("Enter the number of students \n");
    scanf("%d",&n);
    struct marks student[n];
    
    input(student,n);
    sum(student,n);
    percent(student,n);
    display(student,n);

   
}
