/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:04:02 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/28 02:11:33 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼 
*	This function it's included in <string.h>
*	The bzero() function writes n zeroed bytes to the string s.  
*   If n is zero, bzero() does nothing.
*								PARAMETERS ✌🏼
*	s : The pointer from which to begin erasing data.
*	n : The number of bytes to erase.
*								RETURN VALUES 🤙🏼
*	- Nothing
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
