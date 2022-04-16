/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:05:37 by anoury            #+#    #+#             */
/*   Updated: 2022/04/05 23:31:46 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	size_t			i;
	unsigned char	*dptr;
	unsigned char	*sptr;

	dptr = (unsigned char *)d;
	sptr = (unsigned char *)s;
	i = 0;
	if (s == NULL && d == NULL)
		return (NULL);
	while (i < n)
	{
		dptr[i] = sptr[i];
		i++;
	}
	return (d);
}
