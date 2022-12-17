#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
 
    printf("Number   Square Root   Cube Root\n\n",n);
    printf("%d \t %5.2f\t %13.2f\n",n,sqrt((double)n),cbrt((double)n));
    return 0;
}