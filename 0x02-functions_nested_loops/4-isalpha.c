#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: the character to be checked
 * Returns: 1 if c is letter otherwise 0.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
