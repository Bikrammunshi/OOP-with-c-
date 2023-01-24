//WAP to input name, roll number and marks in 5 subjects for a student, and display it.
#include  <stdio.h>
struct marks 
{
    char name[50];
    int roll;
    float mark[5];
};

void  main()
{
    struct marks student = {" ",0,{0,0,0,0,0}};

    printf("Enter the name of the student \n");
    scanf("%[^\n]", student.name);

    printf("Enter the roll number of the student \n");
    scanf("%d",&student.roll);

    printf("Enter the marks of the student in five subjects \n");
    for(int i=0;i<5;i++)
    {
        scanf("%f",&student.mark[i]);
    }

    printf("The name of the student is %s \n",student.name);
    printf("The roll number of the student is %d\n",student.roll);
    printf("The marks of the student in five subjects are\n");
    for(int i=0;i<5;i++)
    {
        printf("%f \n",student.mark[i]);
    }
}
