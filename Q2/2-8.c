#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4*n-2-i; j++) //공백
            printf(" ");
        for (int j = 0; j < 2*i+1; j++) //상단 세모
            printf("*");
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++)  //Pattern 1-1
            printf(" ");
        for (int j = 0; j < 2*i+1; j++)  //Pattern 1-2
            printf("*");
        for (int j = 0; j < 2*(n-i-1); j++) //Pattern 2
            printf(" ");
        for (int j = 0; j < 2*i+1; j++) //Pattern 1-2
            printf("*");
        for (int j = 0; j < 2*n; j++)  //Pattern 3
            printf ("*");
        for (int j = 0; j < 2*(n-i-1); j++)  //Pattern 2
            printf(" ");
        for (int j = 0; j < 2*i+1; j++) //Pattern 1-2
            printf("*");
        printf("\n");
    }

    return 0;
}