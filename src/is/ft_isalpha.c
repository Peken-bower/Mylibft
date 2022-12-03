/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:52:48 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/26 00:04:55 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*                               DESCRIPTION 👆🏼 
*   This function it's included in <ctype.h>
*   This function will check any character isupper() or islower()
*   if true we will return true value if not we will return false. the value of
*   argument must be repsentable as an unsigned char or the Value of EOF
*                               PARAMETERS ✌🏼
*   c : is the character to test.
*                               RETURN VALUES 🤙🏼
*   The isalpha() function returns zero if the character test false and returns 
*   non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 'A' && c < 'Z') || (c > 'a' && c < 'z'))
		return (0);
	return (1);
}
