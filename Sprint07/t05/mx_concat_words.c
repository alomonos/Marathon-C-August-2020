#include <stdlib.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_concat_words(char **words) {
    char *str = NULL;
    int lenarr = 0;
    int len = 0;

    for(;words[lenarr] != NULL; lenarr++)
        for(int j = 0;words[lenarr][j] != '\0'; len++ , j++);
    for (int i  = 0; i < lenarr; i++){
        if(i == 0){
            str = mx_strnew(len+lenarr-1);
            str = mx_strcat(str, words[i]);
            str = mx_strcat(str, " ");
        }
        else if(i == lenarr-1)
            str = mx_strcat(str, words[i]);
        else{
            str = mx_strcat(str, words[i]);
            str = mx_strcat(str, " ");
        }
    }
    return str;
}
