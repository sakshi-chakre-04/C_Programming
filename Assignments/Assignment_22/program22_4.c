/* Assignment22_4.c
   Return frequency of number 11 in array.
*/
#include <stdio.h>
#include <stdlib.h>

int FrequencyOf11(int Arr[], int iLength)
{
    int i, count = 0;
    for(i = 0; i < iLength; i++)
        if(Arr[i] == 11) count++;
    return count;
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

    iRet = FrequencyOf11(p, iSize);
    printf("%d\n", iRet);

    free(p);
    return 0;
}
