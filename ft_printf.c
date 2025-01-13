/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 20:56:57 by isastre-          #+#    #+#             */
/*   Updated: 2025/01/13 16:02:35 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_format(char format, va_list args);

int	ft_printf(char const *str, ...)
{
	int		printed_chars;
	int		has_print;
	va_list	args;

	if (str == NULL)
		return (0);
	va_start(args, str);
	printed_chars = 0;
	while (*str)
	{
		if (*str == '%')
		{
			has_print = ft_print_format(*(str +1), args); // si no es un formato valido devuelve 0
			if (has_print)
				str++; // si ha imprimido, avanza en uno el puntero para no imprimir el format specifier
			else
				has_print = ft_putchar('%'); // si el formato no existe imprime el %, igual que printf original
		}
		else
			has_print = ft_putchar(*str);
		printed_chars += has_print;
		str++;
	}
	va_end(args);
	return (printed_chars);
}

static int	ft_print_format(char format, va_list args)
{
	// printf("format is <%c>", format); // TODO borrar
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'p')
		return (ft_putaddr(va_arg(args, void *)));
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (format == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	if (format == 'x')
		return (ft_putnbr_hex(va_arg(args, unsigned int), 0));
	if (format == 'X')
		return (ft_putnbr_hex(va_arg(args, unsigned int), 1));
	if (format == '%')
		return (ft_putchar('%'));
	return (0);
}
