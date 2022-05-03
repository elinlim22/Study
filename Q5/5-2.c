#include <stdio.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    FILE* file = fopen(argv[1], "r");
    char str[100][100];

    int i = 0;
    int c = fgetc(file);
    int count = 1;
	
    while (c != EOF) {
        if (c == '\n') {
            count++;
        }
        c = fgetc(file);
    }
    int temp = count;
    fclose(file);

    file = fopen(argv[1], "r");
    c = fgetc(file);
    while (c != EOF) {
        str[count-1][i] = c;
        if (c == '\n') {
            count--;
            c = fgetc(file);
            i = 0;
        } else {
            c = fgetc(file);
            i++;
        }
    }

    for (int i = 0; i < temp; i++) {
        for (int j = 0; j < 100; j++) {
            printf("%c", str[i][j]);
        }
    }

    fclose(file);

    return 0;
}