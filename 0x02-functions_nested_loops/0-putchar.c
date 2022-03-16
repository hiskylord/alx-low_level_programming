#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
  char var[] = "_putchar";
  int i = 0;

  while (var[i] != '\0')
    {
      _putchar(var[i]);
      i++;
    }
  _putchar('\n');

  return (0);
}
