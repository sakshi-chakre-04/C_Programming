#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description :   It is used to perform multiplication of factors
//  Input :         Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1; // Initialize to 1 for multiplication
    
    if(iNo < 0) // Input updater
    {
        iNo = -iNo;
    }

    // Logic: Loop up to half the number
    for(i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0) // If 'i' is a factor
        {
            iMult = iMult * i;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    iRet = MultFact(iValue);
    
    printf("%d\n", iRet);
    
    return 0;
}