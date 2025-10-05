#include<stdio.h>

int main()
{
    int iNo1 = 11;
    
    int *p = &iNo1;
    int **q = &p;
    int ***a = &q;
    int ****b = &a;
    int *****c = &b;
    
    printf("%d\n",iNo1);
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%d\n",***a);
    printf("%d\n",****b);
    printf("%d\n",*****c);
    return 0;
}