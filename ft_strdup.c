#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	size_t	length;

	length = ft_strlen(s);
	duplicate = ft_calloc(length + 1, sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	duplicate[length] = '\0';
	while (length-- > 0)
		duplicate[length] = s[length];
	return (duplicate);
}
