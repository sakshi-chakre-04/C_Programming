#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description :   It is used to print the even numbers upto the input
//  Input :         -
//  Output :        -
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        return;
    }
 
    // Logic: Loop from 1 to iNo
    for(i = 1; i <= iNo; i++)
    {
        // Check if the number is even
        if(i % 2 == 0)
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

    PrintEven(iValue);

    return 0;
}