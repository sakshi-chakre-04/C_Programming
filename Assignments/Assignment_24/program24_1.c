/* Assignment24_1.c
   Return largest element from array.
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int Maximum(int Arr[], int iLength)
{
    int max = INT_MIN;
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] > max) max = Arr[i];
    }
    return max;
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

    iRet = Maximum(p, iSize);
    printf("%d\n", iRet);

    free(p);
    return 0;
}
