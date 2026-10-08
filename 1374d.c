#include <stdio.h>
#include <stdlib.h>


typedef long long ll;

int comp(const void *a, const void *b) {
	return (*(ll*)a > *(ll*)b) - (*(ll*)a < *(ll*)b);
}

// two numbers can be the same

int main() {
	ll t, len, div, max_loops, loops_number, count, current;
	scanf("%lld",&t);

	for (ll a = 0; a < t; a++) {

		scanf("%lld %lld",&len, &div);
		ll arr[len];
		for(ll j = 0; j < len; j++) {
			scanf("%lld", &arr[j]);
			arr[j] %= div;
		}
		qsort(arr, len, sizeof(ll), comp);

		ll i = 0;
		max_loops = 0;
		loops_number = 0;
		count = 0;
		while (arr[i] == 0 && i < len) i++;
		if (i == len) {
			printf("0\n");
			continue;
		}
		current = arr[i];
		for (; i < len; i++) {
			if (arr[i] != current) {
				if (count > max_loops) {
					max_loops = count;
					loops_number = current;
				}
				current = arr[i];
				count = 0;
			}
			count++;
		}
		if (count > max_loops) {
			max_loops = count;
			loops_number = current;
			current = arr[i];
		}
		printf("%lld\n", max_loops*div - loops_number + 1);
	}

	return 0;
}
