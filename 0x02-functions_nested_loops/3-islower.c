#include <stdio.h>

int isLowercase(char c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char testChar = 'g';
    
    if (isLowercase(testChar)) {
        putchar(testChar);
        printf(" is a lowercase character.\n");
    } else {
        putchar(testChar);
        printf(" is not a lowercase character.\n");
    }

    return 0;
}
