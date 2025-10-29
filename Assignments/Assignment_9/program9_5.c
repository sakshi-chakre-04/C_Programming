#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            iEvenFact = iEvenFact * i;
        }
        else
        {
            iOddFact = iOddFact * i;
        }
    }
    
    return iEvenFact - iOddFact;
}

// Time Complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = FactorialDiff(iValue);
    
    printf("Factorial difference is %d\n",iRet);
    
    return 0;
}