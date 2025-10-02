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
                               
    return 0;
}