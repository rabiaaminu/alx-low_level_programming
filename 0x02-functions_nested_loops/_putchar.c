#include <main.h>
#include <unistd.h>
/**
 * _putcha - writes the character c to stdout
 * @c: the character to input
 * Return: on success 1
 * Om error, -1 is returned, error is set approximately
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}

