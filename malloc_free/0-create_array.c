#include <stdlib.h>

/**
 *
*/

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return array;
}
