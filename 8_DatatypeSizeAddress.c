#include<stdio.h>

int main()
{
    char cValue='S';
    int iValue=11;
    float fValue=11.11f;
    double dValue=12.35677896;

    printf("Size of character is :%lu\n",sizeof(cValue));// unsigned long..varies with compiler.warning
    printf("Size of integer is :%lu\n",sizeof(iValue));
    printf("Size of float is :%lu\n",sizeof(fValue));
    printf("Size of double is :%lu\n",sizeof(dValue));

    printf("Address of cValue is :%lu\n",&cValue);
    printf("Address of iValue is :%lu\n",&iValue);
    printf("Address of fValue is :%lu\n",&fValue);
    printf("Address of dValue is :%lu\n",&dValue);

    return 0;
}


//storage classes->auto,register,extern,__