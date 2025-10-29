#include<stdio.h>

int sum_of_factors(int number)
{
    int i = 0;
    int iSum = 0;
    if(number <= 0)
    {
        number = -number;
    }

    // TODO: return sum of all positive factors of 'number'
    for(i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

int main(void)
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    printf("%d\n", sum_of_factors(number));
    return 0;
}