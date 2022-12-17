#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,b,c,d = 0;
    float r1,r2;
    float r_ip;

    while(1)
    {   
        printf("\n Enter the values of a,b & c :");
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0){
            printf("\n Error! 'a' cannot be ZERO");
            continue;
        }
        else break;
    }
    
    d = pow(b,2) - 4*a*c;
    if(d < 0){
        r1 = -b/(2*a);
        r2 = r1;
        r_ip = pow(-d,0.5)/(2*a);
        printf("\n Imaginary Roots are '%f + %f i' & '%f - %f i'.",r1,r_ip,r2,r_ip);
    }
    else if( d == 0 ){
        r1 = -b/(2*a);
        r2 = r1;

        printf("\n Roots are '%f' & '%f'.", r1,r2);
    }
    else{
        r1 = (-1*b + pow(d,0.5))/(2*a);
        r2 = (-1*b - pow(d,0.5))/(2*a);

        printf("\n Roots are '%f' & '%f'.", r1,r2);
    }

    return 0;
}







