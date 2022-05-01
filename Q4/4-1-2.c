#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    int i = n-1;
    int j = n/2;
    int k = 0;
    while (k < n*n) {
        if (arr[n-1-i%n][j%n] == 0) {
            arr[n-1-i%n][j%n] = k+1;
            i++;
            j++;
            k++;
        } else {
            i -= 2;
            j -= 1;
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