int mx_popular_int(const int *arr, int size) {
    int current;
    int popular = 0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        current = 0;
        for (int j = 0; j < size; j++) {
        if (arr[i] == arr[j])
            current++;
        }
        if (current > count) {
            popular = arr[i];
            count = current;
        }
    }
    return popular;
}
