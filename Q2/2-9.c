#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);

    for (int i = 0; i < n+2; i++) { //첫줄
        printf("$");
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("$");
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("$\n");
    }
    for (int i = 0; i < n+2; i++) { //끝줄
        printf("$");
    }
    printf("\n");

    return 0;
}