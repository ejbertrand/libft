/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejosue-b <ejosue-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 03:00:53 by ejosue-b          #+#    #+#             */
/*   Updated: 2021/06/03 15:46:11 by ejosue-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
    while (dst[i] && i < size)
		i++;
	if (i == size)
		return i + ft_strlen(src);
	return i + ft_strlcpy(dst + i, src, size - i);
}
