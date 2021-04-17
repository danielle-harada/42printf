/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 22:19:53 by dteixeir          #+#    #+#             */
/*   Updated: 2021/04/17 13:13:40 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <limits.h>

typedef struct	s_flags
{
	char	type;
	char	zero;
	char	minus;
	char	padding;
	int		width;
	int		precision;
	int		number;
	int		count;
	int		len;
	char	dot;
	char	negative;
	char	asterisk;
}				t_flags;

/*
**  Utils functions
*/

void			ft_putchar(t_flags *flags, char c);
size_t			ft_strlen(const char *s);
void			ft_putstr(t_flags *flags, char *s, size_t size);
char			*ft_strdup(const char *s);
int				ft_isdigit(int c);
int				is_number(const char *str, t_flags *flags);
char			*ft_itoa(long int n);
char			*ft_utoa(unsigned int n);
char			*hextoa(t_flags *flags, unsigned long long nb);

/*
**  Deals functions
*/

void			get_flags(const char *str, t_flags *flags, va_list args);
void			get_star(t_flags *flags, va_list args, int *star);
void			print_padding(t_flags *flags, int len);
void			reset_flags(t_flags *flags);
void			init_type(t_flags *flags);
void			print_number(t_flags *flags, char *number, int size);
void			print_uhex(t_flags *flags, char *number, int size);

/*
**  Print functions
*/

void			print_percent(t_flags *flags);
void			print_c(t_flags *flags, int c);
void			print_s(t_flags *flags, char *s);
void			print_p(t_flags *flags, unsigned long pointer);
void			print_d_i(t_flags *flags, long int num);
void			print_u(t_flags *flags, unsigned num);
void			print_hex(t_flags *flags, unsigned int num);

#endif
