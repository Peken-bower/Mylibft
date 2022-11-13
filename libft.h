/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 03:51:37 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/11/13 03:51:38 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memchr(void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif