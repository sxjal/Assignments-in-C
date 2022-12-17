// Q.4 Swap two numbers : 
//b. without third variable

#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 10,b = 20;
    
    printf("Values before swapping");
    printf("\n A : %d", a);
    printf("\n B : %d", b);

    a += b;
    b = a - b;
    a -= b;

    printf("\n Values after swapping");
    printf("\n A : %d", a);
    printf("\n B : %d", b);

    return 0;
}

