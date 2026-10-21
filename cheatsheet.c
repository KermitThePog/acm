#include <stdlib.h>

typedef long long ll;

// Sort in ascending order with qsort
int comp(const void *a, const void *b) {
	return (*(ll*)a > *(ll*)b) - (*(ll*)a < *(ll*)b);
}

ll binarysearch(ll arr[], ll n, ll x) {
    ll a = 0, b = n-1;
    while (a <= b) {
        int c = a + (b - a) / 2;

        // Check if x is present at mid
        if (arr[c] == x) return c;

        // If x greater, ignore left half
        if (arr[c] < x) a = c + 1;

        // If x is smaller, ignore right half
        else b = c - 1;
    }

    return -1;
}
