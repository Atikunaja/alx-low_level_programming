#include <stdio.h>
void first(void) __attribute__((constructor));
/**
 * first _ prints a sentence before the main function is constructed
 */
void first(void)
{
	printf("you're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back! \n");
}
