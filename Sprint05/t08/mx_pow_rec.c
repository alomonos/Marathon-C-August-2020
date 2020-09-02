#include <stdio.h>
//
double mx_pow_rec(double n, unsigned int pow) {
    if(pow != 0)
        return mx_pow_rec(n, pow - 1) * n;
    else
        return 1;
}

// int main() {
//     int n = 5;
//     int pow = -4;
//     printf("%f", mx_pow_rec(n, pow));
// }
