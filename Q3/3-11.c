#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i*2; j++) {
            arr[i][j+i] = arr[n-i-1][i+j] = arr[i+j][i] = arr[i+j][n-i-1] = n/2+1-i;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}
