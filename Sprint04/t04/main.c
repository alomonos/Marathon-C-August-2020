#include <stdio.h>

int main() {
    char s1[13] = "First";
    char s2[8] = "pSecond";
    mx_strcat(s1, s2);
    printf("%s", s1);
}
