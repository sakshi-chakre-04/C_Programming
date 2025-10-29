#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description :   It is used to accept a number and display a pattern
//  Input :         -
//  Output :        -
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Accept(int iNo1)
{
    int iCnt = 0;

    for(iCnt  = 1 ; iCnt <= iNo1 ; iCnt ++)
    {
        printf(" * ");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}
