#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);
    int a[100] = {0};
    int b[100] = {1};
    // int b[] = {1, 2, 2, 1, 1, 1};
    int i = 1;
    int count = 1;

    /* counter */
    while (b[i-1] > 0) {
        if (b[i] != b[i-1]) {
            a[i-1] = b[i-1];
            a[i] = count;
            printf("%3d", a[i-1]);
            printf("%3d", a[i];
            i++;
            count = 1;
        } else {
            count++;
            i++;
        }

        int j = 0;
        while (a[j] > 0) {
            b[j] = a[j];
            printf("%3d", a[j]);
            j++;
        }
        printf("\n");
    }



    return 0;
}