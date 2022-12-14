/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:06:15 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/28 15:54:26 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION šš¼
* 	Applies the function āfā to each character of the āsā to create a new 
*	string (with malloc) resulting from successive applications of āfā.
*								PARAMETERS āš¼
*	#1. The string on which to iterate.
*	#2. The function to apply to each character.
*								RETURN VALUES š¤š¼
*	The string created from the successive applications of āfā. 
*	Returns NULL if the allocation fails.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}
