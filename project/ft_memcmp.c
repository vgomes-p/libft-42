/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 10:53:09 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/13 10:53:09 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *st1, const void *st2, size_t n)
{
	long int	i;

	i = -1;
	if (n == 0)
		return (0);
	while (++i < (long int)n)
		if (*(unsigned char *)(st1 + i) != *(unsigned char *)(st2 + i))
			return (*(unsigned char *)(st1 + i) -
			*(unsigned char *)(st2 + i));
	return (0);
}
