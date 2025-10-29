#include<stdio.h>

void TableRev(int iNo)
{
    int i = 0;

    // Loop from 10 down to 1
    for(i = 10; i >= 1; i--)
    {
        printf("%d ", iNo * i);
    }
    printf("\n");
}

// Time Complexity : O(1)

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    TableRev(iValue);
    
    return 0;
}