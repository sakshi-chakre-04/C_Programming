#include<stdio.h>
#include<stdbool.h> // Added this header for 'bool' type

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description :   It is used to check if two numbers are equal
//  Input :         Int , Int
//  Output :        Boolean
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1, int iNo2) // Fill in
{
    return (iNo1 == iNo2);
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;
    
    printf("Please enter two numbers\n");
    scanf("%d %d", &iValue1, &iValue2);
    
    bRet = ChkEqual(iValue1, iValue2); // Fill in
    
    if(bRet == true) // Fill in
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal"); // Fill in
    }
    
    return 0;
}