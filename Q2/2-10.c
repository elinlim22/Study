#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);

    printf("*\n**\n");
    for (int i = 0; i < n; i++) {
        printf("*");
        for (int j = 0; j < i+1; j++) {
            printf("@");
        }
        printf("*\n");
    }
    for (int i = 0; i < n-1; i++) {
        printf("*");
        for (int j = 0; j < n-i-1; j++) {
            printf("@");
        }
        printf("*\n");
    }
    printf("**\n*\n");

    return 0;
}