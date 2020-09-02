int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char*s, int *count) {
    int low = 0;
    int high = size - 1;
    int middle = 0;

    while(low <= high) {
        ++*count;
        middle = (high + low) / 2;
        if(mx_strcmp(arr[middle], s) == 0)
            return middle;
        else if(mx_strcmp(arr[middle], s) > 0)
            high = middle - 1;
        else
            low = middle + 1;
    }
    *count = 0;
    return -1;
}

// #include <stdio.h>

// int main() {

//     int count = 0;
//     char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     printf("%d", mx_binary_search(arr, 6, "ppp", &count));
// }
