#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    FILE* file = fopen(argv[1], "r");
    char str[10000];

    int c = fgetc(file);
    int i = 0;
	while (c != EOF) {
        str[i] = c;
        if (c == '\n') {
            while (i >= 0) {
                printf("%c", str[i]);
                i--;
            }
            c = fgetc(file);
            i = 0;
        } else {
            c = fgetc(file);
            i++;
        }
    }
    printf("\n%c\n", str[i-1]);
    fclose(file);

    return 0;
}
