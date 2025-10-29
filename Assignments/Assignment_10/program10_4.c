#include<stdio.h>

double FhtoCs(float fTemp)
{
    // Logic
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32.0)*(5.0/9.0);

    return dCelsius;
}

// Time Complexity : O(1)

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&fValue);
    
    dRet = FhtoCs(fValue);
    
    printf("Temperature in Celsius is %f",dRet);
    
    return 0;
}