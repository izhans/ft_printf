/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:55:25 by isastre-          #+#    #+#             */
/*   Updated: 2025/01/13 19:48:10 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putnbr_base(long nbr, char *base)
{
	long	base_len;
	int	ret;

	base_len = ft_strlen(base);
	ret = 0;
	if (nbr < 0)
	{
		ret += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr < base_len)
		return (ret + ft_putchar(base[nbr]));
	ret += ft_putnbr_base(nbr / base_len, base);
	ret += ft_putnbr_base(nbr % base_len, base);
	return (ret);
}
