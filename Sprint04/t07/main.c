#include <stdio.h>

int mx_count_words(const char *str, char delimiter);

int main() {
    char str[] = " follow *  the white rabbit ";
    char delimiter = ' ';
    printf("%d", mx_count_words(str, delimiter));
 }
