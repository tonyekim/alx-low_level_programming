#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of int
 * Return: nothing
 */

void *malloc_checked(unsigned int b)

{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);


	else 
		return (ptr);

}
