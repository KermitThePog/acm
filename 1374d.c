#include <stdio.h>

void sort(long *array, long count)
{
    // insertion sort
    for (long i = 1; i < count; i++)
    {
        long current = array[i];
        long n = i - 1;
        while (n >= 0 && array[n] > current)
        {
            array[n+1] = array[n];
            n--;
        }
        array[n + 1] = current;
    }
}

// two numbers can be the same

int main() {
	long t, n, k, count;
	scanf("%d",&t);
	for (int i = 0; i < t; i++) {
		scanf("%ld %ld",&n, &k);
		long arr[n];
		for(int j = 0; j < n; j++) {
			scanf("%ld", &arr[j]);
			arr[j] %= k;
			arr[j] = k - arr[j];
		}
		sort(arr, n);
		count = 0;
		for(int j = 1; j < n; j++) {
			long diff = arr[j] - arr[j-1];
			if (diff == 0) {
				arr[j] += k;
				sort(arr, n); }
			else count += diff;
		}
		printf("%ld\n", count);
	}

	return 0;
}
