/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:35:32 by nmafa             #+#    #+#             */
/*   Updated: 2019/06/24 17:16:27 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	long sum;
	long x;
	long neg;

	sum = 0;
	neg = 1;
	x = 0;
	while ((str[x] >= 9 && str[x] <= 13) || (str[x] == ' '))
		x++;
	if (str[x] == '-')
	{
		neg = -1;
		x++;
	}
	else if (str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		sum = sum * 10 + str[x] - '0';
		x++;
		if (sum <= -2147483648)
			return (0);
	}
	return (sum * neg);
}
