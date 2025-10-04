#include<stdio.h>

int main()
{
    int Arr[4]={10,20,30,40};
    int Brr[]={10,20,30,40,50};
    int Crr[6]={10,20,30};

    printf("Size of Arr is : %lu\n",sizeof(Arr));       // 16 bytes
    printf("Size of Brr is : %lu\n",sizeof(Brr));       // 20 bytes
    printf("Size of Crr is : %lu\n",sizeof(Crr));       // 24 bytes(e.g. hotel)

    return 0;
}