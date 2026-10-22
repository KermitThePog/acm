#include <stdio.h>

typedef long long ll;

// DYNAMICKE PROGRAMOVANI

int main() {
	ll t, n, prev = 0, before = 0;
	scanf("%lld", &t);
	for (ll i = 0; i < t; i++) {

		scanf("%lld", &n);
		ll arr[n];
		for (ll j = 0; j < n; j++) scanf("%lld", &arr[j]);

		if (n == 0) {printf("Case %lld: %lld\n", (i+1), 0ll); continue;}
		if (n == 1) {printf("Case %lld: %lld\n", (i+1), arr[0]); continue;}
		if (n == 2) {printf("Case %lld: %lld\n", (i+1), (arr[0] > arr[1] ? arr[0] : arr[1])); continue;}

		before = arr[0];
		prev = arr[0] > arr[1] ? arr[0] : arr[1];

		for (ll j = 2; j < n; j++) {
			if (prev >= before + arr[j]) {
				before = prev;
				continue;
			}
			ll temp = before + arr[j];
			before = prev;
			prev = temp;
		}

		printf("Case %lld: %lld\n", (i+1), prev);
	}
}
