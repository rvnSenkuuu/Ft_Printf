/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 00:17:28 by tkara2            #+#    #+#             */
/*   Updated: 2024/06/21 00:17:36 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

int	ft_putaddr(unsigned long long int ptr)
{
	int		len;
	char	*base;

	base = "0123456789abcdef";
	len = 0;
	if (!ptr)
		return (ft_putstr("(nil)"), 5);
	if (ptr >= 16)
		len += ft_putaddr(ptr / 16);
	len += ft_putchar(base[ptr % 16]);
	return (len);
}
