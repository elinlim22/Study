#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);
    int src[100] = {1};
    int dst[100] = {0};
    
    printf(" 1\n");
    for (int k = 0; k < n-1; k++) {
        int i = 0;
        int j = 0;
        int count = 1;

        while (src[i] > 0) {
            if (src[i] != src[i+1]) {
                dst[j] = src[i];
                dst[j+1] = count;
                j += 2;
                count = 1;
            } else {
                count++;
            }
            i++;
        }

        i = 0;
        while (dst[i] > 0) {
            src[i] = dst[i];
            printf("%2d", dst[i]);
            i++;
        }
        printf("\n");
    }

    return 0;
}