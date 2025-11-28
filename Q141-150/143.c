#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {

    struct Student s[3] = {
        {"Ravi", 101, 95},
        {"Sita", 102, 85},
        {"Aman", 103, 88}
    };

    int i, maxIndex = 0;

    for(i = 1; i < 3; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[maxIndex].name, s[maxIndex].marks);

    return 0;
}
