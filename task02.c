/* Practical work 7, task 7.2, variant 9: count hexadecimal digits. */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;
    unsigned long long hex_count = 0;
    unsigned long long total_count = 0;

    while ((ch = getchar()) != EOF) {
        total_count++;
        if (isxdigit((unsigned char)ch)) {
            hex_count++;
        }
    }

    printf("Hexadecimal digits: %llu\n", hex_count);
    printf("Total characters: %llu\n", total_count);
    /* isdigit() is a standard C function; isnumber() is not a standard C function. */
    return 0;
}
