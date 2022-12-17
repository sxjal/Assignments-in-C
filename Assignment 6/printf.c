#include <stdio.h>
#include <conio.h>

int func(char data_type[][20], int j)
{   
    int count = 0;
    for(int i = 0; data_type[j][i] != '\0' ; i++)
        count++;

    return count;
}

int main()
{
    char data_type[][20] = {"char", "unsigned char", "short int",
                         "unsigned short int", "int", "unsigned int", 
                         "long int", "unsigned long int"};
   
    int size[8] = {1,1,2,2,4,4,4,4};
    char specifier[][3] = {"%c", "%c", "%hd", "%hu", "%d", "%u", "%ld", "%lu"};

    printf("Data Type                Size          Format Specefier\n\n");
    
    for(int i = 0; i < 8 ; i++)
    {
        int size_dt = sizeof(data_type[1]);
        printf("%d",size_dt) //func(data_type, i);
        printf("%s %*.d %*.*s\n",data_type[i],27 - size_dt,size[i],20,3,specifier[i]);
    }
    return 0;
}




