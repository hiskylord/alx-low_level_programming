#include <unistd.h>
#define STDOUT 1
int main()
{
write(STDOUT, "Hello, Holberton\n", 13);
exit(0);
}