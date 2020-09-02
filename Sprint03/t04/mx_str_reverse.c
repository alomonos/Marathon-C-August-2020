// #include <stdio.h>
int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
    int n = mx_strlen(s) - 1;
    for (int i = 0; i < n/2; i++) {
        mx_swap_char(&s[i], &s[n - i]);
    }
}

// int main() {
//     char swap[] = "game over";
//     printf("%s\n", swap);
//     mx_str_reverse(swap);
//     printf("%s\n", swap);
// }
