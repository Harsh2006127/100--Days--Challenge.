#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {

    // ------ Input inside the code ------
    enum Role currentRole = GUEST;  // Change to ADMIN or USER to test
    // -----------------------------------

    switch (currentRole) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid Role!\n");
    }

    return 0;
}

