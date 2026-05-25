/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 10:53:53 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/13 10:53:53 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsz)
{
	size_t	i;
	size_t	len1;
	size_t	len2;

	i = 0;
	len1 = ft_strlen(dest);
	len2 = ft_strlen(src);
	if (destsz <= len1)
		return (len2 + destsz);
	while (src[i] && (len1 + 1) < destsz)
		dest[len1++] = src[i++];
	dest[len1] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
