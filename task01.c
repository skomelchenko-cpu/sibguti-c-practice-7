/* Practical work 7, task 7.1, variant 19: output alphabetic characters. */
#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void) {
    int ch;
    setlocale(LC_CTYPE, "");

    while ((ch = getchar()) != EOF) {
        if (isalpha((unsigned char)ch)) {
            putchar(ch);
        }
    }
    return 0;
}
