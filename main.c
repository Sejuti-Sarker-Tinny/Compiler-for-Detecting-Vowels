#include <stdio.h>
#include <ctype.h>

int is_vowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char input[1000];
    printf("Enter a text: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {
        if (is_vowel(input[i])) {
            printf("'%c' is a vowel.\n", input[i]);
        }
    }

    return 0;
}

