#include<stdio.h>

int count_factors(int number)
{
    int i = 0;
    int iCount = 0;
    if(number <= 0)
    {
        number = -number;
    }

    // TODO: return the total number of positive factors of 'number'
    for(i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main(void)
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    printf("%d\n", count_factors(number));
    return 0;
}