#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, found;

    for (i = 0; i < n; i++) {
        found = 0;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        if (found == 0) {
            printf("-1");
        }

        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}