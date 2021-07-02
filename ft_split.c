#include "libft.h"

static size_t	strlenwdel(char const *string, char delimiter)
{
	size_t	len;

	len = 0;
	while (*string != delimiter && *string++ != '\0')
		len++;
	return (len);
}

static size_t	wordcount(char const *string, char delimiter)
{
	size_t	count;
	size_t	len;

	count = 0;
	while (*string != '\0')
	{
		len = strlenwdel(string, delimiter);
		if (len > 0)
		{
			string += len;
			count++;
		}
		else
			string++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	wordlen;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	words = (char **)ft_calloc(wordcount(s, c) + 1, sizeof(char *));
	if (!words)
		return (NULL);
	while (*s != '\0')
	{
		wordlen = strlenwdel((char *)s, c);
		if (wordlen > 0)
		{
			words[i] = (char *)ft_calloc(wordlen + 1, sizeof(char));
			j = 0;
			while (wordlen-- > 0)
				words[i][j++] = *s++;
			words[i][j] = '\0';
			i++;
		}
		else
			s++;
	}
	words[i] = NULL;
	return (words);
}
