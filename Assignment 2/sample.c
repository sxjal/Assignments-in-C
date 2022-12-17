// Q.5 Take 2 characters from the user as an input and print the sum of ASCII values of the chars.\

#include <stdio.h>
#include <conio.h>

int main()
{
    char a,b;
    int sum = 0;
    
    printf("Enter first Character : ");
    scanf("%c", &a);

    printf("dadakda : ");
    scanf("%c", &b);
    
    sum = (int)a + (int)b;

    printf("Sum of their Ascii values : %d", sum);

    return 0;

}