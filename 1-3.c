#include <stdio.h>

int i = 0;
int j = 0;
int n = 5;

int	main(void) {
	while (i < n) {
		j = 0;
		while (j < 2*n) {
			j++;
			printf("%d ", ((10*i)+j));
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}
