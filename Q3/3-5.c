#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);
    int arr[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 ||
                j == 0 || j == n-1 ||
                j == i ||
                j == n-1-i)
            {
                arr[i][j] = 9;
            } else {
                arr[i][j] = 0;
            }
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}