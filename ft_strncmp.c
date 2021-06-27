/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejosue-b <ejosue-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 02:24:59 by ejosue-b          #+#    #+#             */
/*   Updated: 2021/04/16 00:20:12 by ejosue-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	if (n == 0)
		return (0);
	while ((counter < n - 1) && (s1[counter] != '\0') && (s2[counter] != '\0'))
	{
		if (s1[counter] != s2[counter])
			return ((int)s1[counter] - (int)s2[counter]);
		counter++;
	}
	return ((int)s1[counter] - (int)s2[counter]);
}
