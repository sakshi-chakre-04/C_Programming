/* Assignment22_3.c
   Check whether array contains 11 or not.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check11(int Arr[], int iLength)
{
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11)
            return true;
    }
    return false;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = false;

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

    bRet = Check11(p, iSize);
    if(bRet == true)
        printf("11 is present\n");
    else
        printf("11 is absent\n");

    free(p);
    return 0;
}
