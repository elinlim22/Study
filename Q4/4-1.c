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

    int i = 0;
    int j = n/2;
    
    for (int k = 1; k < n*n+1; k++, i--, j++) {
        if (i < 0 && j > n-1) {
            if (arr[i+n][j-n] != 0) {
                i += 2;
                j -= 1;
            } else {
                i += n;
                j -= n;
            }
        } else if (i < 0) {
            i += n;
        } else if (j > n-1) {
            j -= n;
        } else if (arr[i][j] != 0) {
            i += 2;
            j -= 1;
        }
        arr[i][j] = k;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}