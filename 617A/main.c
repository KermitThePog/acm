#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    int count = 0;
    for (int i = 5; i > 0; i--) {
        count += input / i;
        input %= i;
    }
    printf("%d\n", count);
    return 0;
}