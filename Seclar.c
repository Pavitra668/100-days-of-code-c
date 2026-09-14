#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    int secondLargest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }

    if(largest == secondLargest)
    {
        printf("Second largest element does not exist");
    }
    else
    {
        printf("Second largest element = %d", secondLargest);
    }

    return 0;
}