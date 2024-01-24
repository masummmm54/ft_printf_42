/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointerprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakose <muhakose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:40:25 by muhakose          #+#    #+#             */
/*   Updated: 2023/10/19 10:52:16 by muhakose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	basamak_sayar_ptr(uintptr_t n)
{
	int	basamak;

	basamak = 0;
	while (n != 0)
	{
		n /= 16;
		basamak++;
	}
	return (basamak);
}

int	hexatransformlowerpointer(uintptr_t n)
{
	int		size;

	size = basamak_sayar_ptr(n);
	if (n >= 16)
	{
		hexatransformlowerpointer(n / 16);
		hexatransformlowerpointer(n % 16);
	}
	else
	{
		if (n < 10)
		{
			if (ft_putchar_fd_print(n + 48, 1) == -1)
				return (-1);
		}
		else if (n >= 10)
		{
			if (ft_putchar_fd_print(n + 55 + 32, 1) == -1)
				return (-1);
		}
	}
	return (0);
}

int	ft_pointerprint(unsigned long long n)
{
	int	x;

	x = 0;
	if (write(1, "0x", 2) == -1)
		return (-1);
	if (n == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		x += 1;
	}
	else
	{
		x = basamak_sayar_ptr(n);
		if (hexatransformlowerpointer(n) == -1)
			return (-1);
	}
	return (x + 2);
}

/* int main()
{
    int *x;
	int y;
	y = 6;

	x = &y;
	int result;
    result = ft_printf("%p ", 15);
	ft_printf("\n%d",result);

	
   return (0);
} */