#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description :   It is used to check leap year
//  Input :         Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    // use if-else conditions to check leap year
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                printf("%d is a leap year .\n",year);
            else
                printf("%d is NOT a leap year .\n",year);
        }
        else
            printf("%d is a leap year .\n",year);
    }
    else
        printf("%d is NOT a leap year .\n",year);

}
int main()
{
    int number;

    printf("Enter number : \n");
    scanf("%d",&number);

    CheckLeapYear(number);

    return 0;
}