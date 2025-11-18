/* Assignment24_5.c
   For each element print sum of its digits.
*/
#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    for (int i = 0; i < iLength; i++)
    {
        int val = Arr[i];
        int sum = 0;
        int tmp = (val < 0) ? -val : val;  // handle negative numbers
        if (tmp == 0) sum = 0;
        while (tmp != 0)
        {
            sum += tmp % 10;
            tmp /= 10;
        }
        printf("%d ", sum);
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

    DigitsSum(p, iSize);

    free(p);
    return 0;
}
