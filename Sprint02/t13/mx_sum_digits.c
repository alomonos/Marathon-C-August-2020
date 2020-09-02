
#include <stdio.h>
int mx_sum_digits(int num) {
    int sum = 0;
    int d = 0;

    while (num != 0) {
        d = num % 10;
        sum += d;
        num/= 10;
    }
    return sum;
}

int main() {
    printf("%d", mx_sum_digits(-35556));
}
