#include <stdio.h>
#include <stdlib.h>

void strCpy(char * dst, char * src) {
    while (*dst++ = *src++);
}


int main(void) {
    char * p;
    char * s = "Apple";

    strCpy(p, s);
    printf("%s\n", p);



    return 0;
}