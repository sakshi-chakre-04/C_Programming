#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumberType
//  Description :   It is used to check if the number is positive, zero or negative
//  Input :         Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void CheckNumberType(int num)
{
    // use if-else ladder to display type
    if(num < 0)
    {
        printf("%d is negative .",num);
    }
    else if(num == 0)
    {
        printf("%d is a zero .",num);
    }
    else
    {
        printf("%d is positive .",num);
    }
}

int main()
{
    int number;
    printf("Enter number : ");
    scanf("%d",&number);
    CheckNumberType(number);
    return 0;
}