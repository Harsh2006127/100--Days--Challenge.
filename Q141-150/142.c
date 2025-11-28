#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {

    struct Student s[5] = {
        {"Asha", 101, 85},
        {"Ravi", 102, 90},
        {"Neha", 103, 78},
        {"Amit", 104, 88},
        {"Kiran", 105, 92}
    };

    printf("Name\tRoll\tMarks\n");
    printf("---------------------------\n");

    for(int i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
