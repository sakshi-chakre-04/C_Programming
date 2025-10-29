#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description :   It is used to convert the case
//  Input :         char
//  Output :        char
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    // Check if it's an uppercase letter
    if(CValue >= 'A' && CValue <= 'Z')
    {
        // Convert to lowercase by adding 32 (ASCII difference)
        printf("%c\n", CValue + 32);
    }
    // Check if it's a lowercase letter
    else if(CValue >= 'a' && CValue <= 'z')
    {
        // Convert to uppercase by subtracting 32
        printf("%c\n", CValue - 32);
    }
    // If it's not a letter, print it as is
    else
    {
        printf("%c\n", CValue);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter character\n");
    scanf("%c", &cValue);
    
    DisplayConvert(cValue);
    
    return 0;
}