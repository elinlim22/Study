#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);
    int arr[n][n];
    int k = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[j][i] = k++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}