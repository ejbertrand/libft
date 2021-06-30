/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejosue-b <ejosue-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 03:22:22 by ejosue-b          #+#    #+#             */
/*   Updated: 2021/04/14 19:28:18 by ejosue-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*aux_little;
	const char	*aux_big;
	char *end;

	if (!*little)
		return ((char *) big);
	if (len == 0)
		return (NULL);
	aux_big = big;
	aux_little = little;
	if (len < ft_strlen(big))
		end = (char *)&big[len - 1];
	else
		end = (char *)&big[ft_strlen(big) - 1];
	while (*big != '\0' && big <= end)
	{
		while ((big <= end) && (*big++ == *little++))
		{
			if (*little == '\0')
				return ((char *) aux_big);
		}
		aux_big++;
		big = aux_big;
		little = aux_little;
	}
	return (NULL);
}
