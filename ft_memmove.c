/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:23:20 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/13 02:23:21 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*cstdst;
	unsigned char	*cstsrc;
	size_t			i;

	i = 0;
	cstdst = (unsigned char *)dst;
	cstsrc = (unsigned char *)src;
	if (!src && !dst)
	{
		return (NULL);
	}
	while (i < n)
	{
		if (cstsrc > cstdst)
		{
			cstdst[i] = cstsrc[i];
		}
		else
		{
			cstdst[n - 1 - i] = cstsrc[n - 1 - i];
		}
		i++;
	}
	return (dst);
}
