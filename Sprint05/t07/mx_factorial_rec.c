// #include <stdio.h>
//
int mx_factorial_rec(int n) {
    if(n <= 0) {
        return 1;
    if(n == 1)
        return 0;
    }
return n*mx_factorial_rec(n - 1);
}

// int main() {
//     printf("%d", mx_factorial_rec(5));
// }
