#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo == 0)
    {
        return 0;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0) // As per examples, 0 is skipped
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = MultDigits(iValue);
    
    printf("%d\n",iRet);
    
    return 0;
}