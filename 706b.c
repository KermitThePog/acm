#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

void sort(long long *array, long long count)
{
    // insertion sort
    for (long long i = 1; i < count; i++)
    {
        long long current = array[i];
        long long n = i - 1;
        while (n >= 0 && array[n] > current)
        {
            array[n+1] = array[n];
            n--;
        }
        array[n + 1] = current;
    }
}

int main () {
	long n, q, a, b;
	scanf("%ld", &n);
	long long prices[n];
	for (long i = 0; i < n; i++) {
		scanf("%lld", &prices[i]);
	}
	sort(prices, n);
	scanf("%ld", &q);
	long long budget;
	for (long i = 0; i < q; i ++) {
		scanf("%lld", &budget);

		printf("%p\n", );
	}
	return 0;
}
