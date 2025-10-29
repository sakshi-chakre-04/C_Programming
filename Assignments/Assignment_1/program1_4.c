#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description :   It is used to check divisibility by 5
//  Input :         Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5.");
    }
    else
    {
        printf("Not Divisible by 5.");
    }

    return 0;
}