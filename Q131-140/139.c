#include <stdio.h>

int main() {

    enum Status { SUCCESS, FAILURE, TIMEOUT };

    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}
