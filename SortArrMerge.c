
#include <stdio.h>

int main() {
    int m, n, i = 0, j = 0, k = 0;

    scanf("%d", &m);
    int nums1[m];

    for (i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    scanf("%d", &n);
    int nums2[n];

    for (j = 0; j < n; j++) {
        scanf("%d", &nums2[j]);
    }

    int merged[m + n];

    i = 0;
    j = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k] = nums1[i];
            i++;
        } else {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}