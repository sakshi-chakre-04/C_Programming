#include <stdio.h>

int sum_even_numbers(int limit)
{
    int i = 0;
    int iSum = 0;
    // TODO
    for(i = 2; i <= limit; i += 2) // Start at 2, increment by 2
    {
        iSum = iSum + i;
    }
    return iSum;
}

int main()
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    printf("%d\n", sum_even_numbers(limit));
    return 0;
}