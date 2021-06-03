/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejosue-b <ejosue-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:33:01 by ejosue-b          #+#    #+#             */
/*   Updated: 2021/06/02 23:10:52 by ejosue-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(dest);
	while ((i < size - 1) && (src[i] != '\0'))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return ft_strlen(src);
}
