/* Assignment24_2.c
   Return smallest element from array.
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int Minimum(int Arr[], int iLength)
{
    int min = INT_MAX;
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] < min) min = Arr[i];
    }
    return min;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    p = (int *) malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
        scanf("%d", &p[iCnt]);

    iRet = Minimum(p, iSize);
    printf("%d\n", iRet);

    free(p);
    return 0;
}
