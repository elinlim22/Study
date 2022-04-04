#include <stdio.h>
#include <stdlib.h>

int	main (int argc __attribute__((unused)), char** argv) {
	
	int n = atoi(argv[1]);
	int i = 0;
	int j = 0;

/*	while (i < n) {
		j = 0;
		while (j < n) {
			printf("%d ", (n*(n-i)-n+j+1));
			j++;
		}
		printf("\n");
		i++;
	}*/
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", (n*(n-i)-n+j+1));
		}
		printf("\n");
	}
	return 0;
}
		
