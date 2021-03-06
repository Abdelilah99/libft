/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:50:07 by anoury            #+#    #+#             */
/*   Updated: 2022/04/05 16:33:22 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int q)
{
	if ((q <= 122 && q >= 97) || (q <= 90 && q >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
