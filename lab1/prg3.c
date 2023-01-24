//iii. WAP to enter id, name, age and basic salary of n number of em

#include  <stdio.h>
#include  <stdlib.h>

typedef struct 
{
    char name[50];
    long id;
    int age;
    float basic_s;
    float gross_s;
}salary;

void main()
{
    int n;
    printf("Enter the number of employees \n");
    scanf("%d",&n);
    salary emp[n];
    if(n<=100)
    {

        for(int i=0;i<n;i++)
    {
        printf("Enter the name of the employee \n");
        scanf("%s", emp[i].name);

        printf("Enter the id of the employee \n");
        scanf("%ld",&emp[i].id);

        printf("Enter the age of the employee \n");
        scanf("%d",&emp[i].age);

        printf("Enter the basic salary of the employee \n");
        scanf("%f",&emp[i].basic_s);
    }
        for(int i=0;i<n;i++)
    {
        emp[i].gross_s=emp[i].basic_s+0.8*emp[i].basic_s+0.1*emp[i].basic_s;
    }
        printf("NAME \t\t ID \t AGE \t BASIC SALARY \t GROSS SALARY \n");
    for(int i=0;i<n;i++)
    {
        printf("%s \t\t %ld \t %d \t %f \t %f \n",emp[i].name,emp[i].id,emp[i].age,emp[i].basic_s,emp[i].gross_s);
    }
    }

    else
    {
        printf("The number of employees is too large it should be less than 100");
        exit(0);
    }
}