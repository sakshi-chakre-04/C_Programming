#include <stdio.h>

int sum_natural_numbers(int limit)
{
    int i = 0;
    int iSum = 0;
    // TODO
    for(i = 1; i <= limit; i++)
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
    printf("%d\n", sum_natural_numbers(limit));
    return 0;
}