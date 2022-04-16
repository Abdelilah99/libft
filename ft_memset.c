/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:58:39 by anoury            #+#    #+#             */
/*   Updated: 2022/04/05 19:37:51 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	char	*pointer;
	size_t	i;

	pointer = b;
	i = 0;
	while (i < n)
	{
		pointer[i] = (char)c;
		i++;
	}
	return (b);
}
