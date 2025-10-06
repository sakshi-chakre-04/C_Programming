#include<stdio.h>

struct Demo{
    int i;
    char ch1;
    float j;
    char ch2;
    int k;
};

int main()
{
    
    printf("Size of Demo is :%d\n",sizeof(struct Demo));    //16
    
    return 0;
}