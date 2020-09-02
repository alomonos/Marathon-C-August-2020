#include <stdbool.h>

bool compare(int a, int b) {
    return a > b;
}

int main(void) {
    int arr[] =  {5,4,3,2,1};
    mx_sort(arr, 5, compare);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}
