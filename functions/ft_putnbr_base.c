/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:25:08 by isastre-          #+#    #+#             */
/*   Updated: 2024/07/18 15:04:30 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	ft_base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i +1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		c;
	int		base_len;

	base_len = ft_strlen(base);
	if (!ft_base_is_valid(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(nbr / base_len * -1, base);
		ft_putnbr_base(nbr % base_len * -1, base);
	}
	else if (nbr < base_len)
	{
		c = base[nbr];
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putnbr_base(nbr % base_len, base);
	}
}

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
/*
#include <stdlib.h>
int main(int argc, char **argv)
{
	argc = 3;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
}
*/
