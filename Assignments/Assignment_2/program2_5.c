#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEven
//  Description :   It is used to check whether the number is even
//  Input :         Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
    return ((iNo % 2)==0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    // Display result
    if(bRet == true)
    {
        printf("%d is even.",iValue);
    }
    else
    {
        printf("%d is odd.",iValue);
    }
    
    return 0;
}

