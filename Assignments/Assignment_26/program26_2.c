/*
Input: 5
Output: 5 # 4 # 3 # 2 # 1 #

count : 1 2 3 4 5 6 7 8 9 10
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iCount = 0;
    iCount = 1;
    
    for(iCnt = iNo ; iCnt > 0 ; iCnt --)
    {
        printf("%d\t#\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
