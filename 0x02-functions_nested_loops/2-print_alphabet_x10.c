#include <stdio.h>

void printAlphabet() {
    char alphabet = 'a';
    int i;

    for (i = 0; i < 10; i++) {
        int j;
        for (j = 0; j < 26; j++) {
            putchar(alphabet);
            putchar(' ');
            alphabet++;
        }
        putchar('\n');
        alphabet  = 'a';  // Reset alphabet to 'a' for the next line
    }
}

int main() {
    printAlphabet();
    return 0;
}

