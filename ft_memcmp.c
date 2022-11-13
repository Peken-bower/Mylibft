/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:23:15 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/13 02:23:16 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*csts1;
	unsigned char	*csts2;

	index = 0;
	if (!s1 && !s2)
		return (0);
	csts1 = (unsigned char *)s1;
	csts2 = (unsigned char *)s2;
	while (index < n)
	{
		if (csts1[index] != csts2[index])
			return (csts1[index] - csts2[index]);
		else
			index++;
	}
	return (0);
}
