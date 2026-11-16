#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student findTopper(struct Student s[], int n) {
    int i, max = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    return s[max];
}

int main() {
    struct Student s[3], topper;
    int i;

    for (i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    topper = findTopper(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           topper.name, topper.roll, topper.marks);

    return 0;
}