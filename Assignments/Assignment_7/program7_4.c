#include<stdio.h>

void OddDisplay(int iNo)
{
    // Logic
    int i = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for( i = 0 ; i<=iNo ; i++ )
    {
        if(i%2 != 0)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
}

// Time Complexity : O(N)

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    OddDisplay(iValue);
    
    return 0;
}