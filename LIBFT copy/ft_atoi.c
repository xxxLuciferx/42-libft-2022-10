/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:48:01 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/12 18:04:27 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	a;
	int	sign;
	int	res;

	res = 0;
	a = 0;
	sign = 1;
	while (str[a] == ' ' || (str[a] <= 13 && str[a] >= 9))
		a++;
	if (str[a] == '-')
	{
		sign = sign * -1;
		a++;
	}
	else if (str[a] == '+')
	{
		a++;
	}
	while (str[a] <= '9' && str[a] >= '0')
	{
		res = str[a] - '0' + (res * 10);
		a++;
	}
	return (res * sign);
}
