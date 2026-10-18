#include <stdlib.h>

typedef long long ll;

// Sort in ascending order with qsort
int comp(const void *a, const void *b) {
	return (*(ll*)a > *(ll*)b) - (*(ll*)a < *(ll*)b);
}
