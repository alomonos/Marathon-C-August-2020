#include <stdio.h>
void mx_arr_rotate(int *arr, int size, int shift){
    int steps;
    int temp;
    if (shift < 0){
        steps = size - shift % size;
    } else {
        steps = shift % size;
    }
    //printf("%i\n", steps);
    for(int i = 0; i < steps; i++){
        for (int j = size - 1; j > 0; j--){
            temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            //printf("%i\n", i);
        }
    }
}

// int main() {
//     int arr[]= {1, 2, 3, 4, 5};
//     mx_arr_rotate(arr, 5, 2); // arr = {4, 5, 1, 2, 3}
//     printf("mx_arr_rotate(arr, 5, 2) =");
//     for(int i = 0; i < 5; i++) {
//         printf("  %d", arr[i]);
//     }
//     int arr1[]= {1, 2, 3, 4, 5};
//     mx_arr_rotate(arr1, 5, -2); // arr = {3, 4, 5, 1, 2}
//     printf("\nmx_arr_rotate(arr2, 5, -2) =");
//     for(int i = 0; i < 5; i++) {
//         printf("  %d", arr1[i]);
//     }
//     int arr2[]= {1, 2, 3, 4, 5};
//     mx_arr_rotate(arr2, 5, 11); // arr = {5, 1, 2, 3, 4}
//     printf("\nmx_arr_rotate(arr2, 5, 11) =");
//     for(int i = 0; i < 5; i++) {
//         printf("  %d", arr2[i]);
//     }
//     return 0;
// }
