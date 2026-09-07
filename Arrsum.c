#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum of array elements = %d", sum);

    return 0;
}