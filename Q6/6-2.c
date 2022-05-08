#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);

    printf("%d\n", fibonacci(n));

    return 0;
}