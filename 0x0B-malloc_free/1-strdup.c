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
size_t len = strlen(str);
char *dup = malloc(len + 1);

if (str == NULL)
{
return (NULL);
}

if (dup == NULL)
{
return (NULL);
}
memcpy(dup, str, len);

return (dup);
}

