/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:36:29 by nmafa             #+#    #+#             */
/*   Updated: 2019/05/30 14:46:27 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int i;

	i = 0; /*created an a counter variable and made it an unsigned int(this is incase we have a very long string) It is set to 0 because wwe always start at 0 */
	while (s1[i] != '\0' && s1[i] == s2[i])/* my while will loop until it finds a differrence to compare(hence string compare :)*/
		i++;
	return ((unsigned char)s1[i] - unsigned char)s2[i]);
}	/*man says that our comparison is done using unsigned char, we are casting our char into unsigned char says man*/
