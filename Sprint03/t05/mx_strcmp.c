// #include <stdio.h>
int mx_strcmp(const char *s1, const char *s2) {
    int i = 0;
    char *qw = (char*)s1;
    char *wq = (char*)s2;

    while (qw[i] != '\0' && wq[i] != '\0') {
        if (qw[i] != wq[i])
        return qw[i] - wq[i];
    i++;
    }
    return 0;
}

// int main() {
//     char sr[] = "abc";
//     char sr1[] = "cbQ";
//     mx_strcmp(sr, sr1);
//     printf("%d", mx_strcmp(sr, sr1));
// }
