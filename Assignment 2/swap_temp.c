// Q.4 Swap two numbers using: 
//a. temporary variable

#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 10,b = 20;
    int temp;

    printf("Values before swapping");
    printf("\n A : %d", a);
    printf("\n B : %d", b);

    temp = a;
    a = b;
    b = temp;

    printf("\n Values after swapping");
    printf("\n A : %d", a);
    printf("\n B : %d", b);

    return 0;
}



