/* Assignment25_4.c
   Print elements that are divisible by both 3 and 5 (divisible by 15).
*/
#include <stdio.h>
#include <stdlib.h>

void DisplayDivBy3And5(int Arr[], int iLength)
{
    for (int i = 0; i < iLength; i++)
    {
        if ((Arr[i] % 3 == 0) && (Arr[i] % 5 == 0))
            printf("%d ", Arr[i]);
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    if (scanf("%d", &iSize) != 1 || iSize <= 0) return 0;

    p = (int *) malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
        scanf("%d", &p[iCnt]);

    DisplayDivBy3And5(p, iSize);

    free(p);
    return 0;
}
