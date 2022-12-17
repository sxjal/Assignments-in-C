#include<stdio.h>
#include<conio.h>

int main()
{
    char choice = '+';
    float value1 = 0 , value2 = 0, ans = 0;
   
    printf("\n Enter Choice : ");
    scanf("%c",&choice);

    printf("\n Enter value 1 : ");
    scanf("%f",&value1);
    
    printf("\n Enter value 2 : ");
    scanf("%f",&value2);

    switch(choice){
        case '+' : 
            ans = value1 + value2;
            break;
        
        case '-' : 
           ans = value1 - value2;

        case '*' : 
           ans = value1 * value2;
            break;
        
        case '/' : 
            ans = value1 / value2;
            break;
        
        default : 
            printf("\n No such choice available.");
    }

    printf("\n Answer : %0.2f", ans);
    return 0;
}








