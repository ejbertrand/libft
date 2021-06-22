#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
#include "libft/libft.h"

int main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	/* 2 */ (ft_strnstr(haystack, needle, -1) == haystack + 1) ? printf(" OK |") : printf(" NO |");
	/* 10 */ (ft_strnstr(haystack, "abcd", 9) == haystack + 5) ? printf(" OK |") : printf(" NO |");
	printf("\n");
    return (0);
}