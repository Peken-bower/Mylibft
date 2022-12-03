/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:04:41 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/28 02:22:36 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼 
*	This function it's included in <string.h>
*	The memmove() function copies len bytes from string src to string dst.  
*	The two strings may overlap; the copy is always done in a nondestructive 
*	manner.
*								PARAMETERS ✌🏼
*	#1. The destiny pointer in which to copy.
*	#2. The source pointer to copy.
*	#3. The number of bytes to copy the source string.
*								RETURN VALUES 🤙🏼
*	The memmove() function returns the original value of dst.
*/

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
