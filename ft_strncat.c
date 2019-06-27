/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 18:32:28 by nmafa             #+#    #+#             */
/*   Updated: 2019/06/26 18:37:37 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	m;

	i = 0;
	m = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i] '\0' && m < n)
	{
		s1[i + m] = s2[m]
			m++;
	}
	s1[i + m] = '\0';
	return (s1)
}