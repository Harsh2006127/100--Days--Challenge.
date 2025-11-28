#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp, empRead;
    FILE *fp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    fp = fopen("employee.dat", "wb");
    if(fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data stored successfully in binary file.\n");

    fp = fopen("employee.dat", "rb");
    if(fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee Data Read From File:\n");
    printf("ID: %d\n", empRead.id);
    printf("Name: %s\n", empRead.name);
    printf("Salary: %.2f\n", empRead.salary);

    return 0;
}
