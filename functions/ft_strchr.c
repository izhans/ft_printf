/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:30:22 by isastre-          #+#    #+#             */
/*   Updated: 2024/12/28 20:56:41 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/**
 * returns a pointer to the first occurrence of the character c in the string s
 */
char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = c;
	if (ch == '\0')
		return ((char *) s + ft_strlen(s));
	while (*s)
	{
		if (*s == ch)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
