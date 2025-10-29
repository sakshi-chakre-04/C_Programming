#include<stdio.h>

void Table(int iNo)
{
    int i = 0;

    // Loop from 1 to 10
    for(i = 1; i <= 10; i++)
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
    
    Table(iValue);
    
    return 0;
}