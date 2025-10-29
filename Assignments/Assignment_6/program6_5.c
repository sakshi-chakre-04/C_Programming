#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description :   It is used to calculate the percentage
//  Input :         Int, Int
//  Output :        Float
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained) // Fill in
{
    // Logic
    float fPercent = 0.0f;

    // Handle the condition if number is 0
    if(iTotal == 0)
    {
        return 0.0f;
    }
    if(iObtained>iTotal)
    {
        return -1.0f;
    }

    fPercent = ((float)iObtained / (float)iTotal)*100.0f;

    return fPercent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;
    
    printf("Please enter total marks\n");
    scanf("%d", &iValue1);
    
    printf("Please enter obtained marks\n");
    scanf("%d", &iValue2);
    
    fRet = Percentage(iValue1,iValue2); // Fill in
    
    printf("Percentage is %.1f%% \n",fRet); // Fill in
    
    return 0;
}