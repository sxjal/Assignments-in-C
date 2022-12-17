#include<stdio.h>
#include<conio.h>
//#define getch() _getch()
int main()
{
   char string[20]; //*string ;//= "SajalSahu is my name.";

    scanf("%s",string);
    printf("%*.*s\n",24,6,string); //right allignment
    printf("%-*.*s .",20,5,string); //left allignment
    //system("pause");
    //getc(stdin);
    getch();
    return 0;
}

    /*4) Take a string of size more than 10 from the user and print it at the right alignment of 24 till 6 characters only .
    5) Print the same string at the left alignment of 20 till 5 chars .
    */


   