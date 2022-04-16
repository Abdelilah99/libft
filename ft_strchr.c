/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:59:02 by anoury            #+#    #+#             */
/*   Updated: 2022/04/04 22:38:42 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		m;
	char	*mem;

	i = 0;
	m = 0;
	mem = (char *)s;
	while (s[m])
		m++;
	while (i < (m + 1))
	{
		if (s[i] == (char)c)
		{
			return (&mem[i]);
		}
		i++;
	}
	return (NULL);
}
