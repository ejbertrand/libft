#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	char *start_substr;
	size_t index;

	substr = (char *)ft_calloc(len, sizeof(char));
	if (substr == NULL)
		return (NULL);
	start_substr = substr;
	index = 0;
	while(s[start] != '\0' && index < len)
	{
		substr[index++] = s[start++];
	}
	return (start_substr);
}
