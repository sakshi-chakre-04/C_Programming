/* Assignment23_5.c
   Return product of all odd elements; print 0 if there are no odd elements.
*/
#include <stdio.h>
#include <stdlib.h>

int ProductOdd(int Arr[], int iLength)
{
    long long prod = 1;
    int found = 0;
    for(int i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            prod = prod * Arr[i];
            found = 1;
        }
    }
    if(found == 0) return 0;
    return (int)prod; /* if product fits into int; examples show small numbers */
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL, iRet = 0;

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

    iRet = ProductOdd(p, iSize);
    printf("%d\n", iRet);

    free(p);
    return 0;
}

