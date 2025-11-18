/* Assignment22_2.c
   Return difference between frequency of even and odd numbers (even - odd)
*/
#include <stdio.h>
#include <stdlib.h>

int FrequencyDifference(int Arr[], int iLength)
{
    int i, even = 0, odd = 0;
    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2) == 0) even++;
        else odd++;
    }
    return (even - odd);
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

    iRet = FrequencyDifference(p, iSize);
    printf("%d\n", iRet);

    free(p);
    return 0;
}
