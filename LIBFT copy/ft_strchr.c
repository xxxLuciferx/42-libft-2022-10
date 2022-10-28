/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:25 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/08 15:24:03 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	a;

	a = 0;
	if (str == NULL || c == '\0')
		return ((char *)(str + ft_strlen(str)));
	while (str[a])
	{
		if (str[a] == c)
			return ((char *)str + a);
		a++;
	}
	return (NULL);
}
