#include <stdio.h>

int main()
{
    int n, i, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position of element to delete: ");
    scanf("%d", &position);

    if(position < 0 || position >= n)
    {
        printf("Invalid position");
    }
    else
    {
        for(i = position; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        printf("Array after deletion:\n");

        for(i = 0; i < n - 1; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}