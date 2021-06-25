#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	alloc_size;
	size_t	buff_len;
	char	*index;
	char	*trimmed;

	buff_len = ft_strlen(s1) + 1;
	index = (char *)s1;
	alloc_size = 0;
	while (buff_len-- > 0)
		if (!ft_strchr(set, *index++))
			alloc_size++;
	trimmed = (char *)ft_calloc(alloc_size + 1, sizeof(char));
	if (!trimmed)
		return (NULL);
	buff_len = ft_strlen(s1) + 1;
	index = trimmed;
	while (buff_len-- > 0)
	{
		if (!ft_strchr(set, *s1))
			*index++ = *s1;
		s1++;
	}
	*index = '\0';
	return (trimmed);
}
