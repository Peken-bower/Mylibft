/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:23:13 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/13 02:23:14 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	size_t index;
	unsigned char *ptr;

	index = 0;
	ptr = (unsigned char *)str;
	while (index < n)
		if (ptr[index] != (unsigned char)c)
			index++;
		else
			return ((void *)(&ptr[index]));
	return (NULL);
}