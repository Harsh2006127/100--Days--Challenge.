#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");
    if (fp1 == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    fp2 = fopen("output.txt", "w");

    while ((ch = fgetc(fp1)) != EOF) {
        ch = toupper(ch);  
        fputc(ch, fp2);    
    }

    fclose(fp1);
    fclose(fp2);

    printf("File converted successfully! Output written to output.txt\n");

    return 0;
}
