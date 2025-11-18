/* Assignment24_4.c
   Display all such numbers which contain 3 digits (absolute value).
*/
#include <stdio.h>
#include <stdlib.h>

void Digits3(int Arr[], int iLength)
{
    for(int i = 0; i < iLength; i++)
    {
        int val = Arr[i];
        if(val < 0) val = -val;
        if(val >= 100 && val <= 999)
            printf("%d ", Arr[i]);
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    Digits3(p, iSize);

    free(p);
    return 0;
}
