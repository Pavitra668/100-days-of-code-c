#include <stdio.h>

int main()
{
    int n, digit;
    int count[10] = {0};
    int max = 0, i;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n < 0)
    {
        n = -n;
    }

    if(n == 0)
    {
        count[0] = 1;
    }

    while(n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    // Find maximum frequency
    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
        }
    }

    // Display all digits having maximum frequency
    printf("Digit(s) occurring most times: ");

    for(i = 0; i < 10; i++)
    {
        if(count[i] == max)
        {
            printf("%d ", i);
        }
    }

    return 0;
}