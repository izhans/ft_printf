/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:37:15 by isastre-          #+#    #+#             */
/*   Updated: 2024/10/11 00:48:32 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_len(long n);

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;
	int		i;

	num = n;
	len = ft_number_len(num);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (num < 0)
	{
		str[i] = '-';
		num *= -1;
		i++;
	}
	str[len] = '\0';
	while (len > i)
	{
		len--;
		str[len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}

static int	ft_number_len(long n)
{
	if (n < 0)
		return (ft_number_len(n * -1) + 1);
	if (n < 10)
		return (1);
	return (ft_number_len(n / 10) + 1);
}
