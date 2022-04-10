#include <stdio.h>

int main() {
    int arr[3] = { 0, };
    int i = 11;
    int k = 10;
    
    printf("%d\n", k);
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }
    printf("%d\n", k);
    printf("%d, %d", arr[0], i);

    return 0;
}