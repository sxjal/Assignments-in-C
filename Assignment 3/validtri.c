#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    int sum = 0;

    printf("\n Enter Angles : ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    if(sum == 180) printf("\n It's a valid traingle!");
    else printf("\n It's an invalid triangle!");

    return 0;
}



