#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int i = 0;
    // Check for invalid range
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    // Logic: Loop from end down to start
    for(i = iEnd; i >= iStart; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter starting point\n");
    scanf("%d",&iValue1);
    
    printf("Enter ending point\n");
    scanf("%d",&iValue2);
    
    RangeDisplayRev(iValue1, iValue2);
    
    return 0;
}