#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c;

    while(1)
    {
        printf("\n Enter A : ");
        scanf("%d", &a);

        printf("\n Enter B : ");
        scanf("%d", &b);

        if(b>a){
            printf("\n Enter C : ");
            scanf("%d", &c);

            if(c>b) break;
            else{
                printf("\n Please enter the numbers in ascending order.");
                continue;
            }
        }
        else{
            printf("\n Please enter the numbers in ascending order.");
            continue;
        }

    }

    printf("\n a : %d, b : %d, c : %d.",a,b,c);
    return 0;

}