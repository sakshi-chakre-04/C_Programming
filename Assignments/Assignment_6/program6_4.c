#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description :   It is used to perform multiplication of three numbers
//  Input :         Int, Int, Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3) // Fill in
{
    // Logic
    int iMul = 0;
    // Handle the condition if number is 0
    if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
    {
        if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
        {
            return 0;
        }
        if(iNo1 == 0)
        {
            iNo1 = 1;
        }
        if(iNo2 == 0)
        {
            iNo2 = 1;
        }
        if(iNo3 == 0)
        {
            iNo3 = 1;
        }
        iMul = iNo1 * iNo2 * iNo3;
    }
    else
    {
        iMul = iNo1 * iNo2 * iNo3;
    }
    return iMul;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    
    printf("Please enter three numbers\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);
    
    iRet = Multiply(iValue1,iValue2,iValue3); // Fill in
    
    printf("Multiplication of the 3 numbers is %d ",iRet); // Fill in
    
    return 0;
}