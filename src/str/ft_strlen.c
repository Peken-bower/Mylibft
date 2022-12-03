/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:06:08 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/28 15:54:04 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	#include <string.h>
*	The strlen() function computes the length of the string s.
*								PARAMETERS ✌🏼
*	#1. The string to compute length.
*								RETURN VALUES 🤙🏼
*	The strlen() function returns the number of characters that precede the 
*	terminating NUL character.  
*/

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
