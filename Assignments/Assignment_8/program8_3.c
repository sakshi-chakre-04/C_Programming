#include<stdio.h>

int Factorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    // As per the example, handle negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop from the number down to 1
    for(i = iNo; i >= 1; i--)
    {
        iFact = iFact * i;
    }
    
    return iFact;
}

// Time Complexity : O(1)

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);
    
    printf("Factorial of number is %d\n", iRet);
    
    return 0;
}