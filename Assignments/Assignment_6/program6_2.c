#include<stdio.h>
#include<stdbool.h> // Added this header for 'bool' type

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckGreater
//  Description :   It is used to check if the number is greater than 100
//  Input :         Int
//  Output :        boolean
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo) // Fill in
{
    int iGet = 0;

    iGet = iNo > 100;
    if(iGet)
    {
        return true;
    }
    else
    {
        return false;
    }
    // return (iNo>100);
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Please enter number\n");
    scanf("%d", &iValue);
    
    bRet = ChkGreater(iValue); // Fill in
    
    if(bRet == true) // Fill in
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    
    return 0;
}