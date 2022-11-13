/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:25:23 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/13 02:25:24 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	StringStart;
	size_t	StringEnd;
	char	*NewString;

	if (!s1)
		return (NULL);
	StringStart = 0;
	StringEnd = ft_strlen(s1);
	while (s1[StringStart] && ft_strchr(set, s1[StringStart]))
		StringStart++;
	while (s1[StringEnd - 1] && ft_strchr(set, s1[StringEnd - 1])
		&& StringEnd > StringStart)
		StringEnd--;
	NewString = malloc(sizeof(char) * (StringEnd - StringStart + 1));
	if (NewString)
		ft_strlcpy(NewString, &s1[StringStart], StringEnd - StringStart + 1);
	return (NewString);
}
