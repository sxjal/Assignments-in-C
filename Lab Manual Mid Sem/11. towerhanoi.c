#include <stdio.h>
 
void towers(int n, char first, char last, char middle)
{
    if (n == 1)
    {
        printf("\n Move first disk from stand %c to stand %c", first, last);
        return;
    }
    towers(n - 1, first, middle, last);
    printf("\n Move disk %d from stand %c to stand %c", n, first, last);
    towers(n - 1, middle, last, first);
}
 
int main()
{
    int n = 0;
 
    printf("\n Enter Number : ");
    scanf("%d", &n);
    printf("\n Moves involved are as follows.");
    towers(n, 'A', 'C', 'B');
    return 0;
}
