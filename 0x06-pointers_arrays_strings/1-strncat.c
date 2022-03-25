#include "main.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
int j, i;
for (j = 0; dest[j] != '\0'; j++)
;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[j + i] = src[i];
}
/*should end with a end of string char*/
dest[j + i] = '\0';
return (dest);
}
