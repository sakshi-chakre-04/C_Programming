#include<stdio.h>

double SquareMeter(int iValue)
{
    // Logic
    double dSqMeter = 0.0;
    double dConversionFactor = 0.0929;

    if(iValue<0)
    {
        return -1.0;
    }
    dSqMeter = iValue * dConversionFactor;

    return dSqMeter;
}

// Time Complexity : O(1)

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf("Enter area in square feet\n");
    scanf("%d",&iValue);
    
    dRet = SquareMeter(iValue);
    
    printf("Area in square meter is %f",dRet);
    
    return 0;
}