/**
 * main function prints _putchar
 */

#include " main.h"

int main(void)

{
    char word[9] = "_putchar";
    int i = 0;

    while (i < 8)
    {
        _putchar(word[i]);
        i++;
    }
    _putchar('\n');
    return (0);
}	
