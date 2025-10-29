#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description :   It is used to display the factors upto the input
//  Input :         Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    // Logic: Loop from 1 up to half the number
    for(i = 1; i <= iNo / 2; i++)
    {
        // Check if 'i' is a factor
        if(iNo % i == 0)
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
    
    DisplayFactor(iValue);
    
    return 0;
}