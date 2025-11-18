/* Assignment23_3.c
   Return index (0-based) of last occurrence of NO, -1 if not found.
*/
#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    for(int i = iLength - 1; i >= 0; i--)
    {
        if(Arr[i] == iNo) return i; /* zero-based index */
    }
    return -1;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL, iRet = 0;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    printf("Enter the number (NO)\n");
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

    iRet = LastOcc(p, iSize, iValue);
    if(iRet == -1)
        printf("There is no such number\n");
    else
        printf("%d\n", iRet);

    free(p);
    return 0;
}
