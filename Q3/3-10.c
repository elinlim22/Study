#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);
    int arr[n][n];

for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == n-1) {
                arr[i][j] = i+j+1;
            } else if (i == n-1 || j == 0) {
                arr[i][j] = (n-1)*4-(i+j)+1;
            } else if (i == 1 || j == n-2) {
                arr[i][j] = i+j-1+(n-1)*4;
            } else if (i == n-2 || j == 1) {
                arr[i][j] = (n-2)*4-(i+j)+(n-1)*4;
            } else {
                arr[i][j] = n*n+1;
            }
        }
    }


    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (i == 0 || j == n-1) {
    //             arr[i][j] = i+j+1;
    //         } else if (i == n-1 || j == 0) {
    //             arr[i][j] = (n-1)*4-(i+j)+1;
    //         } else if (i == 1 || j == n-2) {
    //             arr[i][j] = i+j-1+(n-1)*4;
    //         } else if (i == n-2 || j == 1) {
    //             arr[i][j] = (n-2)*4-(i+j)+(n-1)*4;
    //         } else {
    //             arr[i][j] = n*n+1;
    //         }
    //     }
    // }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}