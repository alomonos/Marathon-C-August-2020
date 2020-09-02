void mx_princhar(char c);

void mx_str_separate(const char *str, char delim) {
    int flag = 1;

    while(*str != '\0') {
        if ((*str == delim) && flag) {
            mx_printchar('\n');
            flag = 0;
        }
        else if (*str != delim) {
            mx_printchar(*str);
            flag = 1;
        }
        str++;
    }
    mx_printchar('\n');
}

// int main() {
//     mx_str_separate("game over", ' ');

//     mx_str_separate("MMMatrix");
//     mx_str_separate("game over", 'm');
// }
