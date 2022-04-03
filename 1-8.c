#include <stdio.h>

int i = 0;
int j;
int n = 1;

int main(void) {
    while (i < 5) {
        j = 0;
        while (j < 5) {
            j++;
            printf("%d ", n);
            n++;
        }
        i++;
        n = i+1;
        printf("\n");
    }
    return 0;
}