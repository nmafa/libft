/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 18:32:28 by nmafa             #+#    #+#             */
/*   Updated: 2019/06/29 00:31:04 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	m;

	i = 0;
	m = ft_strlen(s1);
	while (s2[i] != '\0' && n-- > 0)
	{
		s1[m++] = s2[i++];
	}
	s1[m] = '\0';
	return (s1);
}
