#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    character = tolower(character);

    switch (character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", character);
            break;
        default:
            printf("%c is not a vowel.\n", character);
            break;
    }

    return 0;
}
