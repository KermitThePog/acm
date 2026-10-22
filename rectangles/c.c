#include <stdio.h>
#include <stdlib.h>

// je to jak ty double baraky

int value(int ver_prev, int hor_now, int ver_now) {
	return hor_now + abs(ver_prev - ver_now);
}

int main () {
	int n;
	scanf("%d", &n);

	int a[n], b[n], score_a[n], score_b[n];

	for (int i = 0; i < n; i++) scanf("%d %d", &a[i], &b[i]);

	// a means that a is the horizontal side
	score_a[0] = a[0];
	score_b[0] = b[0];

	for (int i = 1; i < n; i++) {
		// if i place current so that a is hor, which of the previous is better
		if (value(a[i-1], a[i], b[i]) + score_b[i-1] > value(b[i-1], a[i], b[i]) + score_a[i-1]) score_a[i] = value(a[i-1], a[i], b[i]) + score_b[i-1];
		else score_a[i] = value(b[i-1], a[i], b[i]) + score_a[i-1];

		if (value(a[i-1], b[i], a[i]) + score_b[i-1] > value(b[i-1], b[i], a[i]) + score_a[i-1]) score_b[i] = value(a[i-1], b[i], a[i]) + score_b[i-1];
		else score_b[i] = value(b[i-1], b[i], a[i]) + score_a[i-1];
	}

	printf("%d\n", score_a[n-1] > score_b[n-1] ? score_a[n-1] : score_b[n-1]);
}
