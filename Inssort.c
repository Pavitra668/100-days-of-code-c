#include <stdio.h>

int main()
{
    int n, i, value, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &value);

    pos = 0;

    while(pos < n && a[pos] < value)
    {
        pos++;
    }

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = value;

    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}