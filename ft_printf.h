/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 20:57:05 by isastre-          #+#    #+#             */
/*   Updated: 2025/01/13 19:48:04 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO borrar

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);

// printf utils
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putaddr(void *addr);
int	ft_putnbr(int nbr);
int	ft_putunbr(unsigned int nbr);
int ft_putnbr_hex(int nbr, int uppercase);

// more utils
int	ft_strlen(char *str);
int	ft_putnbr_base(long nbr, char *base);

#endif
