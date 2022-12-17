#include <stdio.h>
#include <conio.h>

float calculator(int *var1, int *var2,char c){
      
    float ans = 0;

    switch(c)
    {
        case '+' : ans = *var1 + *var2;
                    break;
        
        case '-' : ans = *var1 - *var2;
                    break;
                
        case '*' : ans = *var1 * *var2;
                    break;

        case '/' : ans = *var1 / *var2;
                    break;
                    
    }
    return ans;
}
int main()
{
    int a,b;
    char c;
    int choice = 1;

    while(choice)
    {
        while(1){
            printf("\n Available Choice : +,-,* & /.\n Enter yours : ");
            scanf("%c",&c);
            if(c == '+' || c == '-' || c == '*' || c == '/') break;
            else printf("\n Invalid Choice. Please Re-enter.");
        }
        printf("\n Enter Numbers : ");
        scanf("%d%d",&a,&b);
        printf("\n Answer : %.*f",2, calculator(&a,&b,c));

        printf("\n Do you want to calculate again? '1' or '0' : ");
        scanf("%d",&choice);  

    }

    return 0;
}




