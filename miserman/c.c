#include <stdio.h>

int min3(int a, int b, int c) {
	return (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int fares[n][m];
    int score[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &fares[i][j]);
        }
    }

    // initial conditions
    for (int j = 0; j < m; j++) score[0][j] = fares[0][j];

    for (int i = 1; i < n; i++) { // each depth
        for (int j = 0; j < m; j++) { // each bus
            int cost_left  = (j > 0) ? score[i-1][j-1] : 1000;
            int cost_same  = score[i-1][j];
            int cost_right = (j < m - 1) ? score[i-1][j+1] : 1000;

            score[i][j] = fares[i][j] + min3(cost_left, cost_same, cost_right);
        }
    }

    int min_score = 1000;
    for (int j = 0; j < m; j++) {
        if (score[n-1][j] < min_score) min_score = score[n-1][j];
    }

    printf("%d\n", min_score);

    return 0;
}
