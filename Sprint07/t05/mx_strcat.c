int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    int i = mx_strlen(s1);
    int j = 0;

    while(s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    return s1;
}
