#include<stdio.h>

// struct Demo{
//     int i;
//     float f;
// };

struct  Hello
{
    int no;
    float marks;
    struct Demo{
        int i;
        float f;
    }dobj;   // Nested
};

int main()
{
    printf("Size of Demo is :%d\n",sizeof(struct Demo));    //16
    printf("Size of Demo is :%d\n",sizeof(struct Hello));  

    return 0;
}