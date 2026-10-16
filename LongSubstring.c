
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, k, len, max = 0, count;

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len; i++) {
        count = 0;

        for (j = i; j < len; j++) {
            for (k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    break;
                }
            }

            if (k < j) {
                break;
            }

            count++;
        }

        if (count > max) {
            max = count;
        }
    }

    printf("%d", max);

    return 0;
}
