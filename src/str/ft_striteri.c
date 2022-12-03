/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:05:45 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/28 15:16:04 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	Applies the function f to each character of the string passed as argument, 
*	and passing its index as first argument. Each character is passed by
*	address to f to be modified if necessary.
*								PARAMETERS ✌🏼
*	#1. The string on which to iterate.
*	#2. The function to apply to each character.
*								RETURN VALUES 🤙🏼
*	-
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s != 0 && f != 0)
	{
		i = 0;
		while (s[i])
		{
			f(i, s + i);
			i++;
		}
	}
}
