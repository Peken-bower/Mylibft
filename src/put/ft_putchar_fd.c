/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:04:57 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/28 02:24:18 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼 
*	Outputs the character ’c’ to the given file descriptor.
*								PARAMETERS ✌🏼
*	#1. The character to output.
*	#2. The file descriptor on which to write.
*								RETURN VALUES 🤙🏼
*	-
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
