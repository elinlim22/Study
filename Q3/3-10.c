#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);
    int arr[n][n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1-i*2; j++) {
            arr[i][j+i] = j+1+k;
            arr[j+i][n-i-1] = ((n-1)-i*2)*1+j+1+k;
            arr[n-i-1][n-i-j-1] = ((n-1)-i*2)*2+j+1+k;
            arr[n-i-j-1][i] = ((n-1)-i*2)*3+j+1+k; 
        }
        k += (n-1-i*2)*4;
    }
    if (n%2) {
        arr[n/2][n/2] = n*n;
    }

    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
