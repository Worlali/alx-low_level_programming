#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
char lowercase, uppercase;

/* Print lowercase alphabet */
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}

for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}

putchar('\n');

return (0);
}

