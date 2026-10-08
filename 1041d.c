#include <stdio.h>

typedef long long ll;


int main() {
	ll n, h;
	scanf("%lld %lld", &n, &h);
	ll x[n];
	ll y[n];

	for (int i = 0; i < n; i++) {
		scanf("%lld %lld", &x[i], &y[i]);
	}

	ll best = 0;

	for (int i = 0; i < n; i++) {
		ll to_glide = h;
		ll draft_index = i;
		ll distance = 0;
		while (to_glide > 0) {
			to_glide -= x[draft_index+1] - y[draft_index];
			distance += x[draft_index+1] - x[draft_index];
			draft_index++;
		}
		if (distance + to_glide > best) best = distance + to_glide;
	}
	printf("%lld", best);
}
