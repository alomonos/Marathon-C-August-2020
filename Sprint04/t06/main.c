#include <stdio.h>

int mx_atoi(const char *str);

int main() {
    int num = mx_atoi("-635.2.brt");
    printf("%d\n", num);
}
