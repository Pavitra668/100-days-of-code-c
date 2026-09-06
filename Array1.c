#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter the number of elements to be entered in an array:");

        scanf("%d", &n);
    int a[n];

printf("Enter the elements of this array:");


    for (i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
    }
    printf("The elements of this array are:");


    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}