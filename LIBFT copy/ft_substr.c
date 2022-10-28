/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:26:41 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/12 21:36:08 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	copy;

	copy = 0;
	if (!s)
		return (0);
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (len > 0 && start < ft_strlen(s))
	{
		sub[copy] = s[start];
		start++;
		copy++;
		len--;
	}
	sub[copy] = '\0';
	return (sub);
}
