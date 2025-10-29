#include<stdio.h>

void Display(int iNo)
{
    // Logic
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = -iNo ; i<=iNo ; i++)
    {
        printf("\t%d\t",i);
    }
    printf("\n");
}

// Time Complexity : O(2N)

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}