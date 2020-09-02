char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    char *dublicate = mx_strnew(mx_strlen(str));

    dublicate = mx_strcpy(dublicate, str);
    return dublicate;
}
