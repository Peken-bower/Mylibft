/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:23:47 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/13 02:25:05 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	int		i;
	char	*joined;

	i = -1;
	if (!s1)
		s1 = ft_strdup("");
	if (!s2)
		s2 = ft_strdup("");
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	joined = malloc(sizeof(char) * ((lens1) + (lens2) + 1));
	if (!joined)
		return (NULL);
	while (s1[++i])
		joined[i] = s1[i];
	i = -1;
	while (s2[++i])
		joined[lens1 + i] = s2[i];
	joined[lens1 + lens2] = '\0';
	return (joined);
}
