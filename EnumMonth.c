#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;
    char month[10];

    scanf("%s", month);

    if (strcmp(month, "JAN") == 0)
        printf("31 days");
    else if (strcmp(month, "FEB") == 0)
        printf("28 or 29 days");
    else if (strcmp(month, "MAR") == 0)
        printf("31 days");
    else if (strcmp(month, "APR") == 0)
        printf("30 days");
    else if (strcmp(month, "MAY") == 0)
        printf("31 days");
    else if (strcmp(month, "JUN") == 0)
        printf("30 days");
    else if (strcmp(month, "JUL") == 0)
        printf("31 days");
    else if (strcmp(month, "AUG") == 0)
        printf("31 days");
    else if (strcmp(month, "SEP") == 0)
        printf("30 days");
    else if (strcmp(month, "OCT") == 0)
        printf("31 days");
    else if (strcmp(month, "NOV") == 0)
        printf("30 days");
    else if (strcmp(month, "DEC") == 0)
        printf("31 days");
    else
        printf("Invalid month");

    return 0;
}