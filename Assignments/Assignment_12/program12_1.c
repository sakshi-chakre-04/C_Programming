#include<stdio.h>

void print_factors(int number)
{
    int i = 0;
    if(number <= 0)
    {
        number = -number;
    }

    // TODO: print all positive factors of 'number' in ascending order
    for(i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(void)
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    print_factors(number);
    return 0;
}