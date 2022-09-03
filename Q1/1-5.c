#include <stdio.h>
#include <stdlib.h>

int	main(int argc __attribute__((unused)), char * argv[]) {
	int n = atoi(argv[1]);
	/*
	int i = 0;
	while (i < n) {
		int j = 0;
		while (j <= i) {
			printf("%d ", (((i+1)*(i+2))/2)-(i-j));
			j++;
		}
		printf("\n");
		i++;
	}
	*/

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%3d", (((i+1)*(i+2))/2)-(i-j));
		}
		printf("\n");
	}
	return 0;
}
