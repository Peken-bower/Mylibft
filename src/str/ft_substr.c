/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:06:45 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/28 15:56:11 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION ππΌ
*	Allocates (with malloc(3)) and returns a substring from the string βsβ.
*	The substring begins at index βstartβ and is of maximum size βlenβ.
*								PARAMETERS βπΌ
*	#1. The string from which to create the substring.
*	#2. The start index of the substring in the string βsβ.
*	#3. The maximum length of the substring.
*								RETURN VALUES π€πΌ
*	The substring. NULL if the allocation fails.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	s_len;
	size_t	end;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	end = 0;
	if (start < s_len)
		end = s_len - start;
	if (end > len)
		end = len;
	s2 = (char *)malloc(sizeof(char) * (end + 1));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s + start, end + 1);
	return (s2);
}
