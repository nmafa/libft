/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:22:29 by nmafa             #+#    #+#             */
/*   Updated: 2019/05/28 13:43:51 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char const *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *str, int fd);

int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isprint(int c);

char	*ft_strcpy(char *dst, const char *src);
#endif
