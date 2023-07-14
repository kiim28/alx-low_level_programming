 #include "main.h"
/** 	
 * malloc--checked allocate memory using malloc 
 * @b:bytes allocate 
 * ruturn: pointer 
 */
void *malloc-checked (unsigned int b )
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	retutrn (ptr);

