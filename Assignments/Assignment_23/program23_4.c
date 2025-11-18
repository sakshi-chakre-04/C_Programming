/* Assignment23_4.c
   Display all elements that lie between Start and End (inclusive).
*/
#include <stdio.h>
#include <stdlib.h>

void RangeDisplay(int Arr[], int iLength, int iStart, int iEnd)
{
    for(int i = 0; i < iLength; i++)
    {
        if((Arr[i] >= iStart) && (Arr[i] <= iEnd))
            printf("%d ", Arr[i]);
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0, iStart = 0, iEnd = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    printf("Enter the starting point\n");
    scanf("%d", &iStart);

    printf("Enter the ending point\n");
    scanf("%d", &iEnd);

    p = (int *) malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
        scanf("%d", &p[iCnt]);

    RangeDisplay(p, iSize, iStart, iEnd);

    free(p);
    return 0;
}
