/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:11:46 by anoury            #+#    #+#             */
/*   Updated: 2022/04/13 06:52:23 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;

	if (count == SIZE_MAX)
		return (NULL);
	new = malloc(count * size);
	if (new == NULL)
		return (NULL);
	ft_bzero(new, (count * size));
	return ((void *)new);
}
