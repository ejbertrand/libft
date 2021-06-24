#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
#include "libft/libft.h"

int main(void)
{	
	char * * tab = ft_split("tripouille , 42 , huhuhuhu, ffffff, chancho chanchia, fi ", ',');
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);
	printf("%s\n", tab[4]);
	printf("%s\n", tab[5]);
    return (0);
}