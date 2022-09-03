#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);
    /*
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n-i) {
            printf("%d ", i*n+j+1-((i*(i-1))/2));
            j++;
        }
        i++;
        printf("\n");
    }
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            printf("%3d", i*n+j+1-((i*(i-1))/2));
        }
        printf("\n");
    }
    return 0;
}
