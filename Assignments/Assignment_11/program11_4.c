#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    // Logic
    int i = 0;
    int iSum = 0;

    if(iStart>iEnd || iStart<0)
    {
        printf("Invalid range.\n");
        return 0;
    }
    for(i=iStart ; i<=iEnd ; i++)
    {
        if(i%2==0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    
    printf("Enter starting point\n");
    scanf("%d",&iValue1);
    
    printf("Enter ending point\n");
    scanf("%d",&iValue2);
    
    iRet = RangeSumEven(iValue1, iValue2);
    
    printf("Addition is %d",iRet);
    
    return 0;
}