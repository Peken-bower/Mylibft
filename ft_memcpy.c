/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:23:18 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/13 02:23:19 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cstdst;
	unsigned char	*cstsrc;

	i = 0;
	cstdst = (unsigned char *)dst;
	cstsrc = (unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	if (cstdst == cstsrc)
		return (dst);
	while (i < n)
	{
		cstdst[i] = cstsrc[i];
		i++;
	}
	return (dst);
}
