#include <stdio.h>
int main ()
{
    char letter;
    printf ("Input a letter to determine whether vowel or consonant: ");
    scanf ("%d",letter);

    switch (letter)
    {
        case 'a':
            printf ("The letter is a vowel.");
            break;

        case 'e':
            printf ("The letter is a vowel.");
            break;

        case 'i':
            printf ("The letter is a vowel.");
            break;

        case 'o':
            printf ("The letter is a vowel.");
            break;

        case 'u':
            printf ("The letter is a vowel.");
            break;

        default:
            printf ("The letter is a consonant.");
    }

return 0;
}