#include "main.h"
int print_last_digit(int i);
{
	int l;
	l = i % 10;
	if (l < 0)
	{
		_putchar(-l + 0);
		return (-l);
	}
	else
	{
		_putchar(l + 0);
		return (l);
	}
}
