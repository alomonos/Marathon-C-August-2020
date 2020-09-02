// #include <stdio.h>
#include <stdbool.h>

bool mx_islower(int c);
bool mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s) {
    int i = 0;
    while (s[i] && s[i] != '\0') {
        if (mx_islower(s[i]))
            s[i] = mx_toupper(s[i]);
        else
            s[i] = mx_tolower(s[i]);
        i++;
    }
}
// int main() {
//     char str[] = "asdfQWERT";
//     printf("%s\n",str);
//     mx_reverse_case(str);
//     printf("%s",str);
// }

