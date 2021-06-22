#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *joined;
	size_t joined_len;

	joined_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = ft_calloc(joined_len, sizeof(char));
	if (joined == NULL)
		return (NULL);
	// while (joined_len > 1)
	// 	*joined++ =
	// Return the prefixed string
	return (joined);
}