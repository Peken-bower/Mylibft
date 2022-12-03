/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:06:57 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/28 15:57:01 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	Allocates (with malloc) and returns a string representing the integer 
*	received as an argument. Negative numbers must be handled.
*								PARAMETERS ✌🏼
*	#1. the integer to convert.
*								RETURN VALUES 🤙🏼
*	The string representing the integer. NULL if the allocation fails.
*/

#include "libft.h"

static int	ft_negorpos(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while (nbr)
	{
		if (nbr != 0)
		{
			len++;
			nbr /= 10;
		}
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = ft_nbrlen(n);
	res = malloc((len + 1) * (sizeof(char)));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		res[0] = '-';
	else if (n == 0)
		res[0] = '0';
	while (n != 0)
	{
		len--;
		res[len] = ft_negorpos(n % 10) + 48;
		n /= 10;
	}
	return (res);
}
