#include<stdio.h>

#pragma pack(1)     //by use of this, seq doesn't matter
struct Demo{
    int i;
    char ch1;   //change of sequence
    char ch2;
    float j;
    int k;
};

int main()
{
    
    printf("Size of Demo is :%d\n",sizeof(struct Demo));    //16
    
    return 0;
}