#include<stdio.h>

int main()
{
    int iValue = 11;
    char cValue = 'M';

    int *iPtr = &iValue;
    char *cPtr = &cValue;

    printf("sizeof iPtr : %lu\n",sizeof(iPtr));     // 8
    printf("sizeof cPtr : %lu\n",sizeof(cPtr));     // 8

    return 0;
}