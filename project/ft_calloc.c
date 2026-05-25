/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 10:52:41 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/13 10:52:41 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc;
	size_t	sz;

	alloc = NULL;
	sz = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (ft_strdup(""));
	if (sz / nmemb != size)
		return (NULL);
	alloc = malloc(sz);
	if (alloc)
		ft_bzero(alloc, sz);
	return (alloc);
}
