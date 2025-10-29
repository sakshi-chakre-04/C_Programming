#include<stdio.h>

int DollarToINR(int iNo)
{
    // Logic
    int iRupees = 0;

    if(iNo<0)
    {
        return -1;
    }

    iRupees = iNo * 70;
    return iRupees;
}

// Time Complexity : O(1)

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number of USD\n");
    scanf("%d",&iValue);
    
    iRet = DollarToINR(iValue);
    
    printf("Value in INR is %d",iRet);
    
    return 0;
}