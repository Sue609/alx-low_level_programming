include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

#include "main.h"



/**

 * main - check the code.

 *

 * Return: Always 0.

 */

int main(void)

{

    int r;



    r = _islower('H');

    _putchar(r + '0');

    r = _islower('o');

    _putchar(r + '0');

    r = _islower(108);

    _putchar(r + '0');

    _putchar('\n');

    return (0);

}
