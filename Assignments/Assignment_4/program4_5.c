#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description :   It is used to find the sum of differences between factors and non-factors
//  Input :         Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int i = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;
    
    if(iNo < 0) // Input updater
    {
        iNo = -iNo;
    }

    // Logic: Loop from 1 up to (but not including) the number
    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0) // If it's a factor
        {
            iFactSum = iFactSum + i;
        }
        else // If it's a non-factor
        {
            iNonFactSum = iNonFactSum + i;
        }
    }
    // Return the difference as shown in the examples
    return iFactSum - iNonFactSum; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    iRet = FactDiff(iValue);
    
    printf("%d\n", iRet);
    
    return 0;
}