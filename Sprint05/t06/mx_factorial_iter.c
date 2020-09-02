// #include <stdio.h>
//
int mx_factorial_iter(int n) {
    if(n <= 0) {
        return 1;
    if(n == 1)
        return 1;
    }
    return n*mx_factorial_iter(n - 1);
}

// int main() {
//     printf("%d", mx_factorial_iter(10));
// }
