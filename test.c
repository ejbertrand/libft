#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
#include "libft/libft.h"

int main(void)
{	
	char * s = ft_itoa(INT_MIN);
	printf("%s\n", s);
    return (0);
}