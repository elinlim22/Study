#include <stdio.h>

int	i = 0;
int j = 21;
int n = 25;

int	main (void) {
	while (i < 5) {
		while (j <= n) {
			printf("%d ", j);
			j++;
		}
		printf("\n");
		i++;
		j = j - 10;
		n = n - 5;
	}
	return 0;
}
		
