#include <stdio.h>

int mx_popular_int(const int *arr, int size);

int main() {
    int arr[5] = {10, 20, 20, 20};
    printf("%d", mx_popular_int(arr, 5));
}
