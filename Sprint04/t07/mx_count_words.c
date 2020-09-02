int mx_count_words(const char *str, char delimiter) {
    int result = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != delimiter) {
            if(str[i + 1] == delimiter || str[i + 1] == '\0') {
                result += 1;
            }
        }
    }
    return result;
}
