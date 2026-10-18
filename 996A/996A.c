#include <stdio.h>

int main() {
    int input;
    int bills[5] = {1, 5, 10, 20, 100};
    scanf("%d", &input);

    int count = 0;
    for (int i = 4; i >=0; i--) {
        count += input / bills[i];
        input %= bills[i];
    }

    printf("%d\n", count);
    return 0;
}
