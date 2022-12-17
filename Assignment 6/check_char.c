#include <stdio.h>
#include <conio.h>

int checkupper(char c){
    if((int)c >= 65 && (int)c <= 90)
        return 1;
    return 0;
}

int checklower(char c){
    if((int)c >= 97 && (int)c <= 122)
        return 1;
    return 0;
}

int checknumber(char c){
    if((int)c >= 48 && (int)c <= 57)
        return 1;
    return 0;
}

int checkspace(char c){
    if(c == "" && c == " ")
        return 1;
    return 0;
}

int checkspecial(char c){
    if(!checkspace(c) && !checknumber(c) && !checklower(c) && !checkupper(c))
        return 1;
    return 0;
}

int main()
{
    char c;
    c = getc(stdin);

    if(checklower(c) == 1) 
        printf("\n Entered Character is in Lower Case.");

    else if(checkupper(c) == 1)
        printf("\n Entered Character is in Upper Case.");
    
    else if(checknumber(c)== 1)
        printf("\n Entered Character is a Number.");
    
    else if(checkspecial(c) == 1)
        printf("\n Entered Character is Special Character.");
    
    else if(checkspace(c) == 1)
        printf("\n Entered Character is a space character.");
    
    else printf("\n Couldn't identify the character entered. Please try again.");
    
    return 0;
}



