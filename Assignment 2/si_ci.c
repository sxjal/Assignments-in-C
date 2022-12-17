//Q.3 Write a program to calculate simple interest
//and comound interest

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float pa,roi,time;
    float si,ci; 
    printf("Enter Principal Amount : " );
    scanf("%f", &pa);
    
    printf("Enter Rate of Interest : " );
    scanf("%f", &roi);

    printf("Enter Time period(in years) : ");
    scanf("%f", &time);

    si = pa * roi * time;
    ci = pa * (pow((1 + (roi/100)),time)) - pa;

    printf("\n Simple Interest : %f",si);
    printf("\n Compound Interst : %f",ci);

    return 0;
}


