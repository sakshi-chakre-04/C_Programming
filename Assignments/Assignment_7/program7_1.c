#include<stdio.h>

void Pattern(int iNo)
{
    // Logic
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf(" $ * ");
    }
}

// Time Complexity : O(N)

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}