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

int main()
{
    char character = '\0';
    char *ch;
     
    ch = &character;

    while(1)
    {
        printf("\n\n Enter Character : ");
        scanf(" %c", &character);

        if(*ch == '*') 
            break;
        
        else if(checkupper(*ch))
        {
            printf("\n %c is in Upper Case.", *ch);
            printf("\n %c in Lower Case : %c",*ch,(char)(*ch + 32));
        }    

        else if(checklower(*ch))
        {
            printf("\n %c is in Lower Case.", *ch);
            printf("\n %c in Upper Case : %c",*ch,(char)(*ch - 32));
        }  

        else printf("\n Invalid Character is entered, Please enter again.");
    }
    
    return 0;
}