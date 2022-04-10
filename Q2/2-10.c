#include <stdio.h>
#include <stdlib.h>

/*
 *  main()
 */
int main(int argc __attribute__((unused)), char * argv[]) {
    int n = atoi(argv[1]);

    printf("*\n**\n"); // 첫 두줄
    
    /* 상단 */
    for (int i = 0; i < n; i++) {
        printf("*");
        for (int j = 0; j < i+1; j++) {
            printf("@");
        }
        printf("*\n");
    }

    // 하단
    for (int i = 0; i < n-1; i++) {
        printf("*");
        for (int j = 0; j < n-i-1; j++) {
            printf("@");
        }
        printf("*\n");
    }
    
    printf("**\n*\n"); //끝 두줄

    return 0;
}