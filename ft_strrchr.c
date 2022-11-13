/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:25:21 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/13 02:25:22 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	lens;

	lens = ft_strlen(s);
	if ((char)c == 0)
		return ((char *)(s + lens));
	while (lens--)
		if (s[lens] == (char)c)
			return ((char *)(s + lens));
	return (NULL);
}
