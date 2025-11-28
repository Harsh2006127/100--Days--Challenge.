#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll_no;
    int marks;
};

int main() {
    struct Student s1 = {"Asha", 101, 90};
    struct Student s2 = {"Asha", 101, 90};

    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}
