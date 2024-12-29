/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 20:57:05 by isastre-          #+#    #+#             */
/*   Updated: 2024/12/29 14:38:54 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);

// utils
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putaddr(void *addr);
int	ft_putnbr(int nbr);
int	ft_putunbr(unsigned int nbr);
int ft_putnbr_hex(int nbr, int uppercase);

#endif
