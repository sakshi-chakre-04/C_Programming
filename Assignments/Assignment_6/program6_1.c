#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description :   It is used display the full name
//  Input :         character array
//  Output :        strings
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];
    
    printf("Please enter full name\n");
    scanf("%s",&Name); // Fill in
    // fgets(Name, sizeof(Name), stdin);  // Reads entire line including spaces
    
    printf("Your name is %s", Name);
    
    return 0;
}