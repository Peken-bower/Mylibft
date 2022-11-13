/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:25:23 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/13 08:52:23 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	stringstart;
	size_t	stringend;
	char	*newstring;

	if (!s1)
		return (NULL);
	stringstart = 0;
	stringend = ft_strlen(s1);
	while (s1[stringstart] && ft_strchr(set, s1[stringstart]))
		stringstart++;
	if (stringstart == stringend)
		return (ft_strdup(""));
	while (s1[stringend - 1] && ft_strchr(set, s1[stringend - 1])
		&& stringend > stringstart)
		stringend--;
	newstring = malloc(sizeof(char) * (stringend - stringstart + 1));
	if (newstring)
		ft_strlcpy(newstring, &s1[stringstart], stringend - stringstart + 1);
	return (newstring);
}
