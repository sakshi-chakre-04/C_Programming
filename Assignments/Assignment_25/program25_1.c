/* Assignment25_1.c
   Difference between sum of even elements and sum of odd elements.
*/
#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < iLength; i++)
    {
        if ((Arr[i] % 2) == 0) sumEven += Arr[i];
        else sumOdd += Arr[i];
    }
    return (sumEven - sumOdd);
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL, iRet = 0;

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

    iRet = Difference(p, iSize);
    printf("%d\n", iRet);

    free(p);
    return 0;
}
