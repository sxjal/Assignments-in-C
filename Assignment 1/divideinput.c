#include<stdio.h>

int main()
{
    int a = 0, b = 0;

    printf("\n Enter A : ");
    scanf("%d",&a);
    printf("\n Enter B : ");
    scanf("%d",&b);
    
    printf("\n Division of %d and %d : %.2f", a, b,(float)(a / b));

    return 0;
}