#include <stdio.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strjoin(char const *s1, char const *s2) {
    char *ss1 = NULL;
    // char *ss2 = NULL;;
    if(s1 == NULL && s2 == NULL)
        return NULL;
    else if(s1 == NULL) {
        ss1 = mx_strdup(s2);

        // return ss2;
    }
    else if(s2 == NULL)
        // return ss1;
        ss1 = mx_strdup(s1);
    else {
        ss1 = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
        mx_strcat(ss1, s1);
        mx_strcat(ss1, s2);
    }
    return ss1;
}
