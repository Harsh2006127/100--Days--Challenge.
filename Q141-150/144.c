#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

void displayStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {

    struct Student s1 = {"Neha", 104, 92};

    displayStudent(s1);

    return 0;
}
