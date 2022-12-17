#include <stdio.h>
#include <conio.h>

int main()
{
    int dividend, divisor;
 
    printf("Enter dividend: ");
    scanf("%d", &dividend);
 
    printf("Enter divisor: ");
    scanf("%d", &divisor);
 
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    printf("\n Quotient = %d\n", quotient);
    printf("\n Remainder = %d", remainder);

    return 0;
}