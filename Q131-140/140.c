#include <stdio.h>

int main() {

    enum Gender { MALE, FEMALE, OTHER };

    struct Person {
        char name[20];
        enum Gender gender;
    };

    // Input inside the code
    struct Person p = { "Rahul", MALE };

    // Output
    printf("Name: %s\n", p.name);

    if (p.gender == MALE)
        printf("Male\n");
    else if (p.gender == FEMALE)
        printf("Female\n");
    else
        printf("Other\n");

    return 0;
}
