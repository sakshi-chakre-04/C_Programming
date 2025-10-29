#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description :   It is used to display factors in reverse order
//  Input :         Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int i = 0;
    
    if(iNo < 0) // Input updater
    {
        iNo = -iNo;
    }

    // Logic: Loop backwards from half the number down to 1
    for(i = iNo / 2; i >= 1; i--)
    {
        if(iNo % i == 0) // If 'i' is a factor
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
    
    FactRev(iValue);
    
    return 0;
}