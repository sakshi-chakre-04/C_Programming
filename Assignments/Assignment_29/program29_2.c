/*
2. Accept number of rows and number of columns from user and display below pattern.

Input :
iRow = 4
iCol = 4

Output :
2 4 6 8
1 3 5 7
2 4 6 8
1 3 5 7
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0 ,iCount = 0;

    for( i = 1 ; i <= iRow ; i++)
    {
        iCount = (i%2 == 0) ? 1 : 2;
        for( j = 1 ; j <= iCol ; j++)
        {
            printf("%d\t",iCount);
            iCount += 2;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
