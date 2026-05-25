/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 10:52:56 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/13 10:52:56 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	long int	abs;
	long int	len;
	char		*st;

	abs = nb;
	len = ft_intlen(abs);
	st = ft_calloc(len + 1, sizeof(char));
	if (!st)
		return (NULL);
	if (abs < 0)
		abs *= -1;
	while (len > 0)
	{
		st[--len] = abs % 10 + '0';
		abs /= 10;
	}
	if (nb < 0)
		st[0] = '-';
	return (st);
}
