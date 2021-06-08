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
	const char      *substr_ptr;
	const char      *aux_little;

	aux_little = little;
	if (!*little)
		return ((char *)big);
	while (*big != '\0')
	{
		substr_ptr = big;
		while ((len-- > 0) && (*big++ == *little++))
		{
			if (*little == '\0')
				return ((char *)substr_ptr);
		}
		little = aux_little;
	}
	return (NULL);
}
