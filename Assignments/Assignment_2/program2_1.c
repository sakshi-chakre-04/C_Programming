#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display pattern based on condition on the console
//  Input :         -
//  Output :        -
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo1)
{
    int iCnt  = 0;

    // Write Updator
    while (iCnt < iNo1 )
    {
        printf(" * ");
        iCnt ++;
    }
}


int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}