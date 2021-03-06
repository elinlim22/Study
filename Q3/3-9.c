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

    for (int i = 0; i < n-1; i++) {
        arr[0][i] = i+1;
        arr[i][n-1] = n+i;
        arr[n-1][n-i-1] = n*2+i-1;
        arr[n-i-1][0] = n*3+i-2; 
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
