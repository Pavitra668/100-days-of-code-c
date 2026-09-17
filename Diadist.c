#include <stdio.h>

int main()
{
    int a[100][100], r, c;
    int i, j, k;
    int distinct = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check main diagonal elements
    for(i = 0; i < r && i < c; i++)
    {
        for(k = i + 1; k < r && k < c; k++)
        {
            if(a[i][i] == a[k][k])
            {
                distinct = 0;
                break;
            }
        }

        if(distinct == 0)
            break;
    }

    if(distinct == 1)
        printf("True");
    else
        printf("False");

    return 0;
}