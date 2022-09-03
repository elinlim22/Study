#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char * argv[]) {
	int n = atoi(argv[1]);
	/*
	int i = 0;
	while (i < n) {
		int j = 0;
		while (j <= i) {
			printf("%d ", j+1);
			j++;
		}
		printf("\n");
		i++;
	}
	*/
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%3d", j+1);
		}
		printf("\n");
	}
	return 0;
}
