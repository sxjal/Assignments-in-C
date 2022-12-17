#include <stdio.h>
#include <conio.h>

//Write  program to swap two varibales with the help of a temo variable and by using functions.


//function to swap two variables
void swap(int *x, int *y)
{
    int temp;
    
    temp = *x;
    *x = *y;
    *y = temp;

}
int main()
{
    int a = 10,b = 20;
    int temp;

    printf("Values before swapping");
    printf("\n A : %d", a);
    printf("\n B : %d", b);

    //function call
    swap(&a,&b);

    printf("\n Values before swapping");
    printf("\n A : %d", a);
    printf("\n B : %d", b);

    return 0;
    
}




