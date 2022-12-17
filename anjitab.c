#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;

    for(int i = 1; i <= n ; i++)
        sum += pow(i,2);

    printf("\n Sum of the given series : %d", sum);
    return 0;
}