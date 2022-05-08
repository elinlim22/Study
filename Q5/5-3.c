#include <stdio.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    FILE* file = fopen(argv[1], "r");
    char str[100][100] __attribute__((unused));
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            str[i][j] = 0;
        }
    }

    int c = fgetc(file);

    int i = 0;
    int j = 0;
    while (c != EOF) {
        while (c != '\n' && c != EOF) {
            if (c < 32 || c > 126) {
                str[i][j] = ' ';
            } else {
                str[i][j] = c;
            }
            i++;
            c = fgetc(file);
        }
        i = 0;
        j++;
        c = fgetc(file);
    }

    // printf("%c", str[0][0]);
    
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 80; j++) {
            if (str[i][j] == 0) {
                printf(" ");
            } else {
                printf("%c", str[i][j]);
            }
        }
        printf("\n");
    }
    
    fclose(file);

    return 0;
}