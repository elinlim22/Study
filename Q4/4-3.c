#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);
    int src[100] = {1};
    int dst[100] = {0};

    printf("%4d\n", 1);

    int i = 0;
    while (i < n-1) {
        dst[0] = 1;
        int j = 0;
        while (src[j] > 0) {
            dst[j+1] = src[j] + src[j+1];
            j++;
        }

        j = 0;
        while (dst[j] > 0) {
            src[j] = dst[j];
            printf("%4d", dst[j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}