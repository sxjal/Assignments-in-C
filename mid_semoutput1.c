#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 1 , b = 2, c = 3, d;
    d = (a=c, b+= a, c= a+b+c);
    printf("\n %d %d %d %d",a,b,c,d);
    return 0;
    
}