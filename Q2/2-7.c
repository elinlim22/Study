#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++)  //Pattern 1-1
            printf(" ");
        for (int j = 0; j < 2*i+1; j++)  //Pattern 1-2
            printf("*");
        for (int j = 0; j < 2*(n-i-1); j++) //Pattern 2
            printf(" ");
        for (int j = 0; j < 2*i+1; j++) //Pattern 1-2
            printf("*");
        for (int j = 0; j < 2*(n-1); j++)  //Pattern 3
            printf ("*");
        for (int j = 0; j < 2*(n-i-1); j++)  //Pattern 2
            printf(" ");
        for (int j = 0; j < 2*i+1; j++) //Pattern 1-2
            printf("*");
        printf("\n");
    }
        
    return 0;   
}