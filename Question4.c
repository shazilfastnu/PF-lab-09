#include <stdio.h>

int main() {
    char str[1000];
    char *ptr = str;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); //mam this stdin is used for standard input.

    
    while (*ptr != '\0' && *ptr != '\n') {
        length++;
        ptr++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
