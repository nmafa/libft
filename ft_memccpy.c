/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 18:08:22 by nmafa             #+#    #+#             */
/*   Updated: 2019/06/15 18:26:03 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *sc, int c, size_t n)
{
	size_t i;
	char	*dst;
	char	*src;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (n > i)
	{

