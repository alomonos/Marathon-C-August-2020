#include <stdio.h>
char *mx_strchr(const char *s, int c) {
    for(; *s != '\0'; s++) {
        if(*s == c)
        return (char *)s;
    }
    return 0;
}
int main() {
    char *str = "123124235";
    printf("%s", mx_strchr(str, '4'));

}
