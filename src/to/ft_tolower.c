/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:07:02 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/28 15:57:19 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	#include <ctype.h>
*	The tolower() function converts an upper-case letter to the corresponding 
*	lower-case letter.  The argument must be representable as an unsigned char 
*	or the value of EOF.
*								PARAMETERS ✌🏼
*	#1. The character to convert.
*								RETURN VALUES 🤙🏼
*	If the argument is an upper-case letter, the tolower() function returns the 
*	corresponding lower-case letter if there is one; otherwise, the argument 
*	is returned unchanged.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
