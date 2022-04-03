#include <stdio.h>

int i = 0;
int j;

int main(void) {
    while (i < 5) {
        j = 0;
        while (j < 5-i) {
            printf("%d ", j+1);
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}