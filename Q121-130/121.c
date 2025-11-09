#include <stdio.h>

int main() {
    FILE *fp;
    char name[] = "Rahul"; // input already given
    int age = 23;          // input already given

    fp = fopen("info.txt", "w"); // create and open file

    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp); // close file

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
