#include <stdio.h>

int i = 0;
int j;
int n = 1;

int	main(void) {
	while (i < 5) {
		j = 0;
		while (j <= i) {
			printf("%d ", n);
			n++;
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}
