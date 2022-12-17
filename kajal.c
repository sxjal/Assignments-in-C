#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[30];
    int code;
    float grade;
} Student;

average_and_display(Student stds[100],int n)
{
    int i=0;
    float sum=0,temp;
    float average=0;
    for(i=0;i<n;i++)
    {
        sum=sum+stds[i].grade;
    }
    average=sum/n;
    for(i=0;i<n;i++)
    {
        if(stds[i].grade>=average)
        {
        printf("-------------- All Employees Details ---------------\n");
        printf("Name \t: ");
        printf("%s \n",stds[i].name);

        printf("Code \t: ");
        printf("%d \n",stds[i].code);

        printf("Grade \t: ");
        printf("%.2f \n",stds[i].grade);

        printf("\n");
        }
        }

}

void sort(Student *stds[100],int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = stds[i]->grade;
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && stds[j]->grade > key)
        {
           stds[j+1] = stds[j];
            j = j - 1;
        }
        stds[j+1]->grade = key;
    }
}


int main()
{
    int n=0;
    //array to store structure values of all students
    Student stds[100];

    //Taking each student detail as input
    for(int i=0; stds[i].grade!=-1||i<100; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",stds[i].name);

        //ID
        printf("Id: ");
        scanf("%d",&stds[i].code);

        //Grades
        printf("Grades: ");
        scanf("%lf",&stds[i].grade);

        n++;

        printf("\n");
    }

}