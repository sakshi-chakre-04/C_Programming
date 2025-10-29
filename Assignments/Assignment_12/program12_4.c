#include<stdio.h>

int sum_of_even_factors(int number)
{
    int i = 0;
    int iSum = 0;
    if(number <= 0)
    {
        number = -number;
    }

    // TODO: return sum of all positive even factors excluding 'number'
    // Loop only up to number/2 or < number
    for(i = 2; i < number; i += 2) // Start at 2, increment by 2
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
    printf("%d\n", sum_of_even_factors(number));
    return 0;
}