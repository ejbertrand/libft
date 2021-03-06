/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejosue-b <ejosue-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:48:24 by ejosue-b          #+#    #+#             */
/*   Updated: 2021/05/21 01:55:57 by ejosue-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c < 65)
		return (0);
	else if ((c > 90 && c < 97))
		return (0);
	else if (c > 122)
		return (0);
	return (1024);
}
