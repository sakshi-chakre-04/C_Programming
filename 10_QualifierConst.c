#include<stdio.h>

int main()
{
    int iNo1=10;
    const int iNo2=20;

    //just increment not pre/post
    //below lines(11,12) generate errors
    iNo1++;     // iNo1=iNo1+1;
    // iNo2++;     // iNo2=iNo2+1;(addition is possible,but assignment give error)
    // iNo2=30;
    return 0;
}