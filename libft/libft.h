#ifndef	__LIBFT_H__
# define __LIBFT_H__

#include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int 	ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

void	ft_putstr_fd(char *s, int fd);

#endif