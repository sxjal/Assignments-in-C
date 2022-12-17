//Q.2 WAP to convert Fahrenheit temperature to Celsius temperature

#include <stdio.h>
#include <conio.h>
int main()
{
    float fr,c;

    printf("Enter value in Fahrenheit : ");
    scanf("%f", &fr);

    c = 5*(fr - 32.0)/9;

    printf("Value in Celsius : %f", c);

    return 0;
}

