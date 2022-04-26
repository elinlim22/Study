#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);

    int a[100] = { 0 };
    int b[100] = { 1 };
    int num = 0;

    printf("%2d\n", 1);

    for (int i = 0; i < n-1; i++) {
        int k = 1;
        int count = 1;
        while (b[k-1] > 0) {
            if (b[k] != b[k-1]) {
                a[num*2] = b[k-1];
                a[num*2+1] = count;
                k++;
                count = 1;
                num += 1;
            } else {
                k++;
                count++;
            }
        }
        int j = 0;
            while (a[j] > 0) {
                b[j] = a[j];
                printf("%2d", a[j]);
                j++;
            }
            printf("\n");
    }
    return 0;
}