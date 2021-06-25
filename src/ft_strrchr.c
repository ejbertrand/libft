#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i = 0;
	char *ptr;

	i = 0;
	ptr = NULL;
	while(s[i] != '\0')
	{
		if (s[i] == c % 256)
			ptr = (char *)&s[i];
		i++;
	}
	if (s[i] == '\0' && s[i] == c % 256)
		ptr = (char *)&s[i];
	return ptr;
}