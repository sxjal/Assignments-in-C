// Q1: WAP to find the area of a triangle.

#include <stdio.h>
#include <conio.h>

int main()
{
    int length, breadth;
    float area;
    printf("Enter Lenght : ");
    scanf("%d", &length);
    
    printf("Enter Breadth : ");
    scanf("%d", &breadth);

    area = (length + breadth)/2;

    printf("Area of triangle = %f",area);

    return 0;

}






