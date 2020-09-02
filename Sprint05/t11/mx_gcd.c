int mx_gcd(int a, int b) {
    if(b == 0) {
        if (a < 0)
            return -a;
        return a;
    }
    else
        return mx_gcd(b, a % b);

}

// #include <stdio.h>
// it main() {
//     printf("%d"n, mx_gcd(-20, -15));
// }
