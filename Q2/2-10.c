#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);

    printf("*\n**\n"); //첫 두줄
    for (int i = 0; i < n; i++) { //상단
        printf("*");
        for (int j = 0; j < i+1; j++) {
            printf("@");
        }
        printf("*\n");
    }
    for (int i = 0; i < n-1; i++) { //하단
        printf("*");
        for (int j = 0; j < n-i-1; j++) {
            printf("@");
        }
        printf("*\n");
    }
    printf("**\n*\n"); //끝 두줄

    return 0;
}