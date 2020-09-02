int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    if(a < 0) {
        a *= -1;
        return 1;
    if(b < 0)
        b *= -1;
        return 1;
    }
    return (a * b) / mx_gcd(a, b);
}

// #include <stdio.h>

// int main() {
//     printf("%d", mx_lcm(1000000, 150000));
// }
