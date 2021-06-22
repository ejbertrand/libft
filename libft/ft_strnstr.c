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
	const char      *aux_little;
	const char		*aux_big;

	aux_big = big;
	aux_little = little;								// Storing the original pointer for little string
	if (!*little)										// Verifying if little is empty
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big != '\0')								// Repeat while big hasn't reached it's end
	{
		while ((len-- > 0) && (*big++ == *little++))	// Repeat while big and little coincide (increase +1 each pointer) and length doen't reach 0 (decrease -1 the length)
		{
			if (*little == '\0')						// If little reached it's end, return the pointer of big, saved previously.
				return ((char *)aux_big);
		}
		aux_big++;
		big = aux_big;
		little = aux_little;							// Return the pointer of little to it's original position
	}
	return (NULL);
}
