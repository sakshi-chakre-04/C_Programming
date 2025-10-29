#include<stdio.h>

int OddFactorial(int iNo)
{
    // Logic
    int iCnt = 0;
    int iFact = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=iNo ; iCnt>=1 ; iCnt--)
    {
        if(iCnt%2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

// Time Complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = OddFactorial(iValue);
    
    printf("Odd Factorial of number is %d",iRet);
    
    return 0;
}