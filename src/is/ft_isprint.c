/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:59:06 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/26 00:14:25 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*                               DESCRIPTION 👆🏼 
*   This function it's included in <ctype.h>
*   The rule of function will check for any printing character 
*   in this function will including space (' ') in our check  
*                               PARAMETERS ✌🏼
*   c : is the character to test.
*                               RETURN VALUES 🤙🏼
*   The isprint() function returns zero if the character test false and returns 
*   non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c < '0') || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}
