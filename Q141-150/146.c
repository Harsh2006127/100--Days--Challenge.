#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joinDate;   // Nested structure
};

int main() {
    struct Employee emp;

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d",
          &emp.joinDate.day,
          &emp.joinDate.month,
          &emp.joinDate.year);

    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%d",
           emp.name,
           emp.id,
           emp.joinDate.day,
           emp.joinDate.month,
           emp.joinDate.year);

    return 0;
}
