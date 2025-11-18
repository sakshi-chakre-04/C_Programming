/* Assignment23_1.c
   Check whether NO is present or not - print TRUE or FALSE
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo) return true;
    }
    return false;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    bool bRet = false;

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

    bRet = Check(p, iSize, iValue);
    if(bRet == true) printf("TRUE\n");
    else printf("FALSE\n");

    free(p);
    return 0;
}