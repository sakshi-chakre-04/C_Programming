#include<stdio.h>

struct Demo{
    int i;
    float j;
    int k;
};

int main()
{
    struct Demo obj;
    struct Demo *p = &obj;
    // -> for indirect access , . for direct

    p->i = 11;
    p->j = 90.4f;
    p->k = 21;

    printf("%d\n",p->i);

    return 0;
}