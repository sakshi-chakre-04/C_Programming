#include<stdio.h>

struct Demo{
    int i;
    float j;
    int k;
};

int main()
{
    struct Demo obj;

    printf("Size of Demo is :%d\n",sizeof(struct Demo));    //12
    printf("Size of object is : %lu\n",sizeof(obj));        //12

    return 0;
}