#include<stdio.h>

int KMtoMeter(int iNo)
{
    // Logic
    int iMeter = 0;

    if(iNo<0)
    {
        return -1;
    }

    iMeter = iNo * 1000;
    return iMeter;
}

// Time Complexity : O(1)

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter distance\n");
    scanf("%d",&iValue);
    
    iRet = KMtoMeter(iValue);
    
    printf("Distance in meter is %d",iRet);
    
    return 0;
}