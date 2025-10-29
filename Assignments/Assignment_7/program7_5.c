#include<stdio.h>

void MultipleDisplay(int iNo)
{
    // Logic
    int i = 0;

    for(int i = 1; i<=5 ; i++)
    {
        printf("%d\t",iNo*i);
    }
}

// Time Complexity : O(1)

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    MultipleDisplay(iValue);
    
    return 0;
}