#include <stdio.h>

int main() {
    FILE *ptr;
    char ch;
    int linenumber = 1;
    ptr = fopen("qno1.txt", "r");
    if (ptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    printf("Line no %d: ", linenumber);
    while ((ch =fgetc(ptr))!= EOF) {
        printf("%c", ch);
	if (ch == '\n') {
            linenumber++;
            printf("Line no %d: ", linenumber);
        }
    }
    fclose(ptr);

    return 0;
}
