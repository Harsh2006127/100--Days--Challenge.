#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    int marks;
};

int main() {

    // Input already given inside code
    struct Student s = {"Asha", 101, 90};

    // Printing student data
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}

