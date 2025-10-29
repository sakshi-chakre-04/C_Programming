#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Description :   It is used to display if not factors
//  Input :         Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int i = 0;
    
    if(iNo < 0) // Input updater
    {
        iNo = -iNo;
    }

    // Logic: Loop from 1 up to (but not including) the number
    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0) // If 'i' is NOT a factor
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    NonFact(iValue);
    
    return 0;
}