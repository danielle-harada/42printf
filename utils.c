/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:46:05 by dteixeir          #+#    #+#             */
/*   Updated: 2021/04/17 13:00:31 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putchar(t_flags *flags, char c)
{
	write(1, &c, 1);
	flags->len++;
}

size_t		ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void		ft_putstr(t_flags *flags, char *s, size_t size)
{
	size_t i;

	i = 0;
	if (!s)
		return ;
	while (i < size)
	{
		ft_putchar(flags, s[i]);
		i++;
	}
	return ;
}

char		*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	str = 0;
	i = 0;
	if (!(str = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int			ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
