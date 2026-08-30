#include <stdio.h>

int main()
{
    int n, temp, first, last, digits = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Find the last digit
    last = n % 10;

    // Find the number of digits
    while (temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    // Find the first digit
    first = temp;

    // Remove the first and last digit
    middle = (n % digits) / 10;

    // Swap first and last digit
    result = last * digits + middle * 10 + first;

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}