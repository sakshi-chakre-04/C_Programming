#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   It is used to check if the number is even or odd
//  Input :         Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int num)
{
    // write logic using if-else to check
    int iRet = 0;

    iRet = num % 2;

    if(iRet == 0)
    {
        printf("%d is even .",num);
    }
    else
    {
        printf("%d is odd .",num);
    }
}

int main()
{
    int number = 0;

    printf("Enter number : ");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}