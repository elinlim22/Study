#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);
    int k = n+2;
    int arr[k][k];

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            if (i%(k-1) == 0 || j%(k-1) == 0) {
                arr[i][j] = n;
            } else if ()
        }
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            printf("%2d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}

// if (i%(k-1)==0) {
            //     arr[i][j] = n;
            //     //arr[j][i] = n-i;
            // } 
            // else if ((i%(k-1))%2==1) {
            //     arr[i][j] = n-1;
            // }
            // else {
            //     arr[i][j] = n-2;
            // }