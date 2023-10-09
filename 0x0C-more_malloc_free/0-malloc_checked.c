:x

/**
 * malloc_checked - fuction that allocates memory and also checks if sucessful
 * @b: size of memory to allocate.
 *
 * Return: pointer to memory, Else if return exit status 98 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		free(ptr);

	return (ptr);
}
