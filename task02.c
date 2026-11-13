#include <stdio.h>
#include <ctype.h>
int main(void){
    int ch;
    unsigned long long hex_count = 0;
    unsigned long long total_count = 0;
    while ((ch = getchar()) != EOF){
        total_count++;
        if (isxdigit((unsigned char)ch)){
            hex_count++;
        }
    }
    printf("Hexadecimal digits: %llu\n", hex_count);
    printf("Total characters: %llu\n", total_count);
    return 0;
}
