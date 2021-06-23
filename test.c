#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
#include "libft/libft.h"

int main(void)
{	
	char * str = strdup("1");
	char * s = ft_substr(str, 42, 42000000);
	printf("%s\n", s);
    return (0);
}