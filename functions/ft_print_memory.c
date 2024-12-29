/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:25:17 by isastre-          #+#    #+#             */
/*   Updated: 2024/07/12 15:17:28 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_put_address(int direction);
void	ft_putnbr(int nb);
void	ft_putstr(char *str, unsigned int size);
int		ft_strlen(char *str);
void	ft_print_hexa_char(char c);

void	*ft_print_memory(void *addr, unsigned int size)
{
	void			*ptr;
	int				direction;
	unsigned int	buf;
	char			*content;
	unsigned int	i;

	ptr = &addr;
	direction = *(int *) ptr;
	buf = 16;
	content = (char *) addr;
	while (buf <= size)
	{
		ft_put_address(direction);
		i = 0;
		// ft_print_hexa_content ¿mandar size?
		while (i < 16)
		{
			ft_print_hexa_char(content[i]);
			if (i % 2 != 0)
				write(1, " ", 1);
			i++;
		}
		ft_putstr(content, buf);
		direction += 16;
		buf += (size - buf) > 16 ? 16 : (size % 16);
		content += 16;
	}
	return (addr);
}

// print memory address in hexadecimal
void	ft_put_address(int direction)
{
	ft_putnbr(direction);
	write(1, ": ", 2);
}

void	ft_print_hexa_content(char *content) // TODO implement
{
	unsigned int	i;

	i = 0;

	while (i < 16)
	{
		// si por size no toca imprimir content[i] llenar con espacios
		if (content[i] < 16) 
			write(1, "0", 1);
		ft_putnbr(content[i]);

		if (i % 2 != 0)
			write(1, " ", 1);
		i++;
	}


}

// print content in hexadecimal
void	ft_print_hexa_char(char c)
{
	if (c < 16)
		write(1, "0", 1);
	ft_putnbr(c);
}

// transform char to hexadecimal
void	ft_putnbr(int nb)
{
	int		c;
	char	*hex_base;

	hex_base = "0123456789abcdef";
	if (nb < 16)
	{
		c = hex_base[nb];
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 16);
		ft_putnbr(nb % 16);
	}
}

// print contenido en chars
void	ft_putstr(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size % 16 == 0)
		size = 16;
	else
		size %= 16;
	while (i <= size)
	{
		if ((str[i] < 32 || str[i] > 126))
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

//unused
/*
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
*/
