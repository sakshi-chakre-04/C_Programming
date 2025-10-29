#include<stdio.h>

double CircleArea(float fRadius)
{
    // Logic
    double dPI = 3.1415926535;
    double dArea = 0.0f;

    dArea = dPI * fRadius * fRadius ;

    return dArea;
}

// Time Complexity : O(1)

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter radius\n");
    scanf("%f",&fValue);
    
    dRet = CircleArea(fValue);
    
    printf("Area of circle is %f",dRet);
    
    return 0;
}