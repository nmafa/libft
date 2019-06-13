/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:30:17 by nmafa             #+#    #+#             */
/*   Updated: 2019/06/13 18:20:06 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ret;

	ret = (unsigned char *)s;
	while(n){
		if(*ret == (unsigned char)c){
			return (ret);
		}else{
			ret++;
		}
		n--;
	}
	return (NULL);
}

//#include <stdio.h>

//int main(){
//	printf("%s", ft_memchr("this is where here", 'i', 15));
//	return 0;
//}
