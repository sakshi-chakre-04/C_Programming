#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display contents on the console
//  Input :         -
//  Output :        -
//  Author :        Sakshi Shilisiddha Chakre
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;

    i = 5;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    return;
}

int main()
{
    Display();

    return 0;
}