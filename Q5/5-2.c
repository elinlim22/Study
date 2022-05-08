#include <stdio.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    FILE* file = fopen(argv[1], "r");
    char str[100][100];

    int c = fgetc(file);
    int i = 0;
    int j = 0;

    while (c != EOF) {
        while (c != '\n' && c != EOF) {
            str[i][j] = c;
            j++;
            c = fgetc(file);
        }
        str[i][j] = '\n';
        i++;
        j = 0;
        c = fgetc(file);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d", str[i][j]);
        }
        printf("\n");
    }

    i -= 1;

    while (i >= 0) {
        j = 0;
        while (str[i][j] != '\n') {
            printf("%c", str[i][j]);
            j++;
        }
        if (str[i][j] == '\n') {
            printf("\n");
        }
        i--;
    }

    fclose(file);

    return 0;
}
