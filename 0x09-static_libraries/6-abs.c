#include "main.h"

/**
 *  _abs - computes abusolute value of integer
 *
 *  @a: integer
 *
 *  Return: absolute value
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}

}
