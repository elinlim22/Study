#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n-1);
}

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);

    printf("%d\n", factorial(n));

    return 0;
}