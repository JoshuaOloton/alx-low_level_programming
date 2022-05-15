#include <stddef.h>
#include <stdio.h>

void printBefore(void) __attribute__((constructor));

/**
 * printBefore - prints from init by the loader before main
 */
void printBefore(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
