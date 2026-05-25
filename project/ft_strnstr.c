/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 10:54:22 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/13 10:54:22 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *st1, const char *st2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(st2);
	if (j == 0)
		return ((char *)st1);
	while (*st1 && i <= n)
	{
		if (n - i++ >= j && !ft_strncmp(st1, st2, j))
			return ((char *)st1);
		st1++;
	}
	return (0);
}
