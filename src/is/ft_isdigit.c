/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:59:03 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/26 00:14:01 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*                               DESCRIPTION 👆🏼 
*   This function it's included in <ctype.h>
*	The isdigit() function tests for a decimal digit character.
*                               PARAMETERS ✌🏼
*   c : is the character to test.
*                               RETURN VALUES 🤙🏼
*   The isdigit() function returns zero if the character test false and returns 
*   non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c < '0') || (c > '9'))
		return (0);
	return (1);
}
