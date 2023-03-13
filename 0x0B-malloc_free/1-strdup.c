#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string.
 * @str: a string.
 *
 * Return: new_str or NULL.
 */

char *_strdup(char *str)
{
char *str2;
str2 = strdup(str);

if (str == NULL)
{
return (NULL);
}

return (str2);
}

