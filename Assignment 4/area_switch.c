#include<stdio.h>
#include<conio.h>
#include <math.h>

int main()
{
    int choice = 0;
    float ans = 0;
    
    printf("\n Avaiable choices to find area of triangle");
    printf("\n 1. Using height and base, \n 2. Using 3 sides.");
    printf("\n Enter your choice : ");
    scanf("%d",&choice);

    switch(choice){
        case 1 : 
            ;int height = 0, base = 0;
        
            printf("\n Enter height and base : ");
            scanf("%d %d",&height,&base);
        
            ans =  0.5 * height * base; 
            break;

        case 2 : 
            ;int s1 = 0, s2 = 0, s3 = 0;
            float s = 0;
            printf("\n Enter the three sides : ");
            scanf("%d %d %d",&s1,&s2,&s3);

            s = (s1 + s2 + s3)/2;
            ans = pow(s*(s - s1)*(s - s2)*(s - s3),0.5); 
            break;
    }

    printf("\n Answer : %0.2f", ans);
    return 0;
}








