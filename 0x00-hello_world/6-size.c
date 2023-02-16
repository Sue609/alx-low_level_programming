#iclude <stdio.h>
/**
 * main - Aprogram that prints size of various types
 * Return = 0 (success)
 */
int main(void)
{
char w;
int a;
long int x;
long long int y;
float z;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
return (0);
}
