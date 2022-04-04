#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);

    for (int i = 0; i < n; i++) { //상단
        for (int j = 0; j < n-i-1; j++) {
            printf(" ");
        }
        for (int j = 0; j < (2*i+1); j++) {
            printf("*");
        }
        for (int j = 0; j < 2*(n-i-1); j++) {
            printf(" ");
        }
        for (int j = 0; j < (2*i+1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < n-1; i++) { //하단
        for (int j = 0; j <= i; j++) {
            printf(" ");
        }
        for (int j = 0; j < (2*(n-i-1)-1); j++) {
            printf("*");
        }
        for (int j = 0; j < 2*(i+1); j++) {
            printf(" ");
        }
        for (int j = 0; j < (2*(n-i-1)-1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}