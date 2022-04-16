/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:04:59 by anoury            #+#    #+#             */
/*   Updated: 2022/04/06 16:42:17 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ss;
	char	*dd;
	size_t	i;

	ss = (char *)src;
	dd = (char *)dst;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dd > ss)
		while (len-- > 0)
			dd[len] = ss[len];
	else
	{
		while (i < len)
		{
			dd[i] = ss[i];
			i++;
		}
	}
	return (dst);
}
