#include <stdio.h>

int main(int argc __attribute__((unused)), char* argv[]) {
    FILE* file = fopen(argv[1], "r");
    char str[10000];

    int c = fgetc(file);
    while (c != EOF) {
        int i = 0;

        while (c != '\n' && c != EOF) {
            str[i++] = c;
            c = fgetc(file);
        }
        c = fgetc(file);
        
        while (i > 0) {
            printf("%c", str[--i]);
        }
        printf("\n");
    }

    fclose(file);

    return 0;
}
