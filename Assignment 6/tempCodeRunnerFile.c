#include <stdio.h>
#include <conio.h>


int main()
{
   long int a = 5;
    double  b = 2.5;
    char c = 'c';

     double *pointer;
    pointer = &b;
    printf("\n Int : %d",sizeof(a));
    printf("\n Float : %d",sizeof(b));
    printf("\n Char : %d",sizeof(c));
  
  printf("\n Float : %f",b);
  printf("\n pointer : %d",sizeof(*pointer));
    return 0;
}




