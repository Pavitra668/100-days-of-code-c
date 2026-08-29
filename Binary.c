#include <stdio.h>

int main() {
    int n, temp, digit, place = 1;
    int highest = 1;

    scanf("%d", &n);

    temp = n;

    while (temp >= 10) {
        highest = highest * 10;
        temp = temp / 10;
    }

    while (highest > 0) {
        digit = n / highest;

        if (digit == 0)
            printf("1");
        else
            printf("0");

        n = n % highest;
        highest = highest / 10;
    }

    return 0;
}