#include "main.h"

/**
 * checks for uppercase character.
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (0);
}
