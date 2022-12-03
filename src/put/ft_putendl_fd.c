/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:05:03 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/28 02:24:59 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼 
*	Outputs the integer ’n’ to the given file descriptor.
*								PARAMETERS ✌🏼
*	#1. The string to output.
*	#2. The file descriptor on which to write.
*								RETURN VALUES 🤙🏼
*	-
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
