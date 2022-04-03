#include <stdio.h>

int i = 0;
int j;
int n = 1;

int main(void) {
    while (i < 5) {
        j = 0;
        while (j < 5-i) {
            printf("%d ", n);
            j++;
            n++;
        }
        i++;
        printf("\n");
    }
    return 0;
}