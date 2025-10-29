#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Description :   It is used to find the largest of two numbers
//  Input :         Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int FindMax(int a, int b)
{
    // return larger number using if-else
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1, num2, result;

    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    result = FindMax(num1,num2);
    printf("Maximum is : %d\n",result);

    return 0;
}