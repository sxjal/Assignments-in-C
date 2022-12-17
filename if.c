#include <stdio.h>
#include <conio.h>

int main()
{

    int n;

    scanf("%d", &n);

    if(n == 0)
        printf("Number is Zero");

    else if(n > 0)
        printf("Number is positive");
    
    else
        printf("Number is negative");

    return 0;
}
