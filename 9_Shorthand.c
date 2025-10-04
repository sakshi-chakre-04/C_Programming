#include<stdio.h>

int main()
{
    //******** MENTION auto IN INTERVIEW  *********/
    //has auto storage class , memo->stack
    int i=21;
    int j=51;

    int iAns=0,jAns=0;

    iAns=i++;
    jAns=++j;

    printf("Value of i :%d\n",i);        //21
    printf("Value of iAns :%d\n",iAns);  //22

    printf("Value of j :%d\n",j);        //52
    printf("Value of jAns :%d\n",jAns);  //52

    return 0;
}