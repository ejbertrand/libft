#include "libft.h"

char *ft_strdup(const char *s)
{
	char *duplicate;
	size_t length;

	length = ft_strlen(s);
	duplicate = malloc(length * sizeof(char));
	if (duplicate == NULL)
		return NULL;
	while (length-- > 0)
		duplicate[length] = s[length];
	return (duplicate);
}
