#include <stdio.h>

int main() {
int arr[100], n, k, i, j, temp;


printf("Enter the number of elements: ");
scanf("%d", &n);

printf("Enter the array elements: ");
for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

printf("Enter k: ");
scanf("%d", &k);

// Sort the array in ascending order
for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

if (k >= 1 && k <= n) {
    printf("%d\n", arr[k - 1]);
} else {
    printf("Invalid value of k\n");
}

return 0;

}
