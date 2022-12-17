#include <stdio.h>
#include <conio.h>

int main()
{
    float length, width;

    printf("Enter length of rectangle : \n");
    scanf("%f", &length);
    
    printf("Enter width of rectangle : \n");
    scanf("%f", &width);

    float area = length * width;
    
    printf("Area of Rectangle is : %.2f\n", area);
    return 0;
}