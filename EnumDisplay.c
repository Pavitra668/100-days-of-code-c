#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;
    char status[20];

    scanf("%s", status);

    if (strcmp(status, "SUCCESS") == 0) {
        s = SUCCESS;
        printf("Operation successful");
    }
    else if (strcmp(status, "FAILURE") == 0) {
        s = FAILURE;
        printf("Operation failed");
    }
    else if (strcmp(status, "TIMEOUT") == 0) {
        s = TIMEOUT;
        printf("Operation timed out");
    }

    return 0;
}