#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	char	*joined_index;	
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined = (char *)ft_calloc(s1_len + s2_len + 1, sizeof(char));
	joined_index = joined;
	if (joined == NULL)
		return (NULL);
	while (s1_len-- > 0)
		*joined_index++ = *s1++;
	while (s2_len-- > 0)
		*joined_index++ = *s2++;
	*joined_index = '\0';
	return (joined);
}
