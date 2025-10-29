#include <stdio.h>

void print_odd_numbers(int limit)
{
    int i = 0;
    // TODO
    for(i = 1; i <= limit; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    print_odd_numbers(limit);
    return 0;
}