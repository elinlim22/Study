#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);
    int arr[n][n];
    int k = 1;
    int a = 1;

    for (int i = 0; i == 0; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = k++;
            a = j;
        }
    }
//    printf("a is %d\n", a);

    for (int i = 0; i == 0; i++) {
        for (int j = i+1; j < n; j++) {
            arr[j][a] = k++;
        }
        for (int j = i+1; j < n; j++) {
            arr[a][n-j-1] = k++;
        }
        for (int j = i+1; j < n-i-1; j++) {
            arr[n-j-1][i] = k++;
        }
        //break;
    }

    for (int i = 1; i < n-1; i++) {
        for (int j = 1; j < n-1; j++) {
            arr[i][j] = 0;
        }
    }
//    printf("a is %d\n", a);
    


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

