#include <stdio.h>

unsigned long mx_hex_to_nbr(const char *hex);

int main () {
    char str[] = "ffffffffffff";
    // for(int i = 0; str[i] != '\0'; i++)
    //     printf("%c\t", str[i]);

    unsigned long value = mx_hex_to_nbr(str);
    printf("%lu", value);
    return 0;
}
