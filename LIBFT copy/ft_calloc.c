/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:10:32 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/13 15:29:28 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;
	char	*m;

	s = (char *)malloc(count * size);
	m = s;
	if (!s)
		return (NULL);
	while (*s)
	{
		*s = 0;
		s++;
	}
	return (m);
}
