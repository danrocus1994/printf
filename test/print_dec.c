#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>


int print_decimal(va_list *list)
{
	int s  = va_arg(*list, int);
        char *r = _tostring (s);
	s = 0;
	while(*(r) != '\0')
	{
		_put (*r);
		r++;
		s++;
	}
	return (s);
}
