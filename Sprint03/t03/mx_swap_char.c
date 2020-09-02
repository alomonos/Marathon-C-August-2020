// #include <stdlib.h>
// #include <stdio.h>
void mx_swap_char(char *s1, char *s2) {
    char swp = *s1;
    *s1 = *s2;
    *s2 = swp;
}

// int main() {
//     char s1[] = "ONE";

//     printf("s1 : %s\n", s1);

//     mx_swap_char(&s1[0], &s1[1]);
//     mx_swap_char(&s1[1], &s1[2]);
//     printf("s1 : %s\n", s1);

//     return 0;
// }
