#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {3, 4, 5}, {5, 6, 7}};
    for (int j = 0; j < 3; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 2; i >= 0; i--)
            {
                printf("%d ", a[i][j]);
            }
        }
        else
        {
            for (int i = 0 /*n-1 n is number of column*/; i < 3; i++)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
}