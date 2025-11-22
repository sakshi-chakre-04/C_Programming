/*
Input: 8
Output: 2 4 6 8 10 12 14 16
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iTable = 0;
    iTable = 1;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        iTable = 2 * iCnt;
        printf("%d\t",iTable);
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
