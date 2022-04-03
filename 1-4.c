#include <stdio.h>

int i = 0;
int j;

int main(void) {
	while (i < 5) {
		j = 1;
		while (j-1 <= i) {
			printf("%d ", j);
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}
