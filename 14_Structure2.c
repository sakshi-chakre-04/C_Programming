#include<stdio.h>

struct Demo{
    int i;
    float j;
    int k;
};

int main()
{
    struct Demo obj;

    obj.i = 11;
    obj.j = 90.4f;
    obj.k = 21;

    printf("%d\n",obj.i);       //11
    printf("%f\n",obj.j);       //90.4
    printf("%d\n",obj.k);       //21

    return 0;
}