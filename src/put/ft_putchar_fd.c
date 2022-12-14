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
*								DESCRIPTION šš¼ 
*	Outputs the character ācā to the given file descriptor.
*								PARAMETERS āš¼
*	#1. The character to output.
*	#2. The file descriptor on which to write.
*								RETURN VALUES š¤š¼
*	-
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
