#include <stdio.h>

int main() {
    char date[] = "15/04/2025"; // <-- Input already given
    int dd, mm, yyyy;

    sscanf(date, "%d/%d/%d", &dd, &mm, &yyyy);

    char months[][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul",
                        "Aug","Sep","Oct","Nov","Dec"};

    printf("%02d-%s-%d", dd, months[mm - 1], yyyy);

    return 0;
}
