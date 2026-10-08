#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int home[count];
    int guest[count];

    for (int i = 0; i < count; i++) {
        scanf("%d %d", &home[i], &guest[i]);
    }

    int n = 0;

    for (int i = 0; i < count; i ++) {
        for (int j = 0; j < count; j++) {
            if (j == i) continue;
            if (home[i] == guest[j]) n++;
        }
    }

    printf("%d", n);
    return 0;
}
