#include <stdio.h>

int i;
int n;

int main(void) {
    while (i < 5) {
        n = i+1;
        while (n < 6) {
            printf("%d ", n);
            n++;
        }
        i++;
        printf("\n");
    }
    return 0;
}