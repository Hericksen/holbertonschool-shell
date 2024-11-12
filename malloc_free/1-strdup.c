#include <stdlib.h>

/**
 *
*/


char *_strdup(char *str)
{
	int size = 0;
	char *p, *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	p = malloc(size);

	if (p == NULL)
		return (NULL);

	duplicate = p;

	while (*str)
		*duplicate++ = *str++;

	*duplicate = '\n';

	return (p);
}
