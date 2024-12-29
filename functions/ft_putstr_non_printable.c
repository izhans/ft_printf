/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 02:42:22 by isastre-          #+#    #+#             */
/*   Updated: 2024/07/14 05:49:50 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_not_printable(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 127))
			ft_print_not_printable(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_not_printable(char c)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	write(1, "\\", 1);
	if (c < 16)
		write(1, "0", 1);
	else
		write(1, &hex_base[c / 16], 1);
	write(1, &hex_base[c % 16], 1);
}
/*
int main()
{
	char str[] = "Coucou\ntu vas bien ?";
	str[0] = 31;
	ft_putstr_non_printable(str);
}
*/
