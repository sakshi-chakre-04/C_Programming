#include <stdio.h>

void print_even_numbers(int limit)
{
    int i = 0;
    // TODO
    for(i = 2; i <= limit; i += 2) // Start at 2, increment by 2
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    print_even_numbers(limit);
    return 0;
}