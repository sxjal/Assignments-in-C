#include <stdio.h>
#include <conio.h>
#include <math.h>
#define pi 3.14
int main()
{
    printf("\n Degree | sin(x) | cos(x) | tan(x) |");
    printf("\n -----------------------------------");
    
    for(int degree = 0; degree <= 360; degree += 15)
    {
        double rad = pi * degree / 180;
        double sine = sin(rad),cosine = cos(rad), tanx = tan(rad);
        if(degree == 90 || degree == 270) 
            printf("\n %d  |  %.2lf  |  %.2lf  |    %c   |",degree, sin(rad),cos(rad),'x');
        else
            printf("\n %d  |  %.2lf  |  %.2lf  |  %.2lf  |",degree, sin(rad),cos(rad),tan(rad));
        
    }
    printf("\n -----------------------------------");
    printf("\n Where 'x' stands for undifined.");
    
    return 0;
}