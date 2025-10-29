#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display pattern upto a frequency count based on condition 
//  Input :         Int, Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int i = 0;

    // Write Updator
    for(i = 1 ; i <= iFrequency ; i++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter frequency : ");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}