/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:59:00 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/26 00:09:54 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*                               DESCRIPTION 👆🏼 
*   This function it's included in <ctype.h>
*   The rule of function will check any character if it's between 0 and 127 
*   inclusive if true we will return true value if not we will return false.
*                               PARAMETERS ✌🏼
*   c : is the character to test.
*                               RETURN VALUES 🤙🏼
*   The isascii() function returns zero if the character test false and returns 
*   non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c < 0) || (c > 127))
		return (0);
	return (1);
}
