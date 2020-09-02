#include <stdio.h>

char *mx_strncpy(char *dst, const char *src, int len) {
    for(int i = 0; src[i] && i != len; i++) {
        dst[i] = src[i];
    dst[i] = '\0';
    }

    return (char *)dst;
}

int main() {
    int len = 3;
    char dst[11];
    char src[11] = "yo neo bro";
    mx_strncpy(dst, src, len);
    printf("%s", dst);
}
