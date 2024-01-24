/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakose <muhakose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:33:21 by muhakose          #+#    #+#             */
/*   Updated: 2023/10/23 12:56:14 by muhakose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>

int				hexatransformlower(unsigned int x);
int				hexatransformupper(unsigned int x);
int				ft_unsignednbr_fd(unsigned int x);
int				ft_printf(const char *format, ...);
int				ft_putchar_fd_print(int c, int fd);
int				ft_putnbr_fd_print(int n, int fd);
int				ft_putstr_fd_print(char *c, int fd);
size_t			ft_strlen_print(const char *s);
int				nbrprinter(int n);
int				basamak_sayar_print(unsigned int n);
int				basamak_sayar_base16(unsigned int n);
int				ft_pointerprint(unsigned long long n);
int				hexatransformlowerpointer(uintptr_t n);

#endif