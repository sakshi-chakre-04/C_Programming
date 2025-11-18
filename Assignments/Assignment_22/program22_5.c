/* Assignment22_5.c
   Return frequency of given NO in the array.
*/
#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int i, count = 0;
    for(i = 0; i < iLength; i++)
        if(Arr[i] == iNo) count++;
    return count;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL, iRet = 0;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    printf("Enter the number to search (NO)\n");
    scanf("%d", &iValue);

    p = (int *) malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
        scanf("%d", &p[iCnt]);

    iRet = Frequency(p, iSize, iValue);
    printf("%d\n", iRet);

    free(p);
    return 0;
}
