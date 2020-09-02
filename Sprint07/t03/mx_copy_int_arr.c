 #include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    int *arr = (int*)malloc(size*sizeof(int));

    if(arr == NULL || src == NULL)
        return NULL;
    for (int i = 0; i < size; i++) {
        arr[i] = src[i];
    }
    return arr;
}
