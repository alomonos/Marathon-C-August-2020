#include <stdlib.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_linear_search(char **arr, const char *s) {
    for(int i = 0; arr[i] != NULL; i++) {
        if(mx_strcmp(arr[i], s) == 0)
            return i;
    }
    return -1;
}

// #include <stdio.h>
// int main() {
//     char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z", NULL};
//     printf("%d", mx_linear_search(arr, "z"));
// }
