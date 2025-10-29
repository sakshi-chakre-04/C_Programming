#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description :   It is used to find the largest of three numbers
//  Input :         Int
//  Output :        Int
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int FindLargest(int x, int y, int z)
{
    // return the largest number using if-else
    if(x>=y && x>=z)
    {
        return x;
    }
    else if(y>=x && y>=z)
    {
        return y;
    }
    else
    {
        return z;
    }

}

int main()
{
    int a, b , c , result;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &a ,&b ,&c);

    result = FindLargest(a, b , c);
    printf("Largest number is : %d\n", result);

    return 0;
}