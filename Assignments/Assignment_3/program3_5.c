#include<stdio.h>

// Create a boolean type
typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description :   It is used to check check vowels
//  Input :         character
//  Output :        character
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char CValue)
{
    // Check for both lowercase and uppercase vowels
    if(
        CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' ||
        CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U'
      )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter character\n");
    scanf("%c", &cValue);
    
    bRet = ChkVowel(cValue);
    
    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }
    
    return 0;
}