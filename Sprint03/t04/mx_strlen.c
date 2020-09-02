int mx_strlen(const char *s) {
    int i = 0;

    while (s[i] && s[i] != '\0')
        i++;

    return i;
}

// int main() {
//     // int result = -1231231;

//     int result = mx_strlen("qksajdha");
//         printf("%d",  result);

// }
