#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */
int _atoi(char *s)
{
int sign = 1, resp = 0, fN;
for (fN = 0; !(s[fN] >= 48 && s[fN] <= 57); fN++)
{
if (s[fN] == '-')
{
sign *= -1;
}
}
for (int i = fN; s[i] >= 48 && s[i] <= 57; i++)
{
resp *= 10;
resp += (s[i] - 48);
}
return (sign * resp);
}
