/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:35:49 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/14 18:26:56 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	temp_var;
	int	needle_len;

	needle_len = ft_strlen(needle);
	temp_var = 0;
	while (len && *haystack && *needle)
	{
		if (*haystack != *needle)
		{
			needle -= temp_var;
			temp_var = 0;
			haystack++;
			len--;
			continue ;
		}
		haystack++;
		needle++;
		len--;
		temp_var++;
		if (temp_var == needle_len)
			break;
	}
	if (temp_var == needle_len)
		return ((char*)haystack - needle_len);
	return (NULL);
}
// {
//     size_t i;
//     size_t j;
//     size_t needle_len;
//     i = 0;
//     needle_len = ft_strlen(needle);
//     if
//     if((needle == haystack) || !len || !*needle)
//         return((char *)haystack);
//     if (needle && haystack && len)
//     {
//         while(haystack && i < (len - 1) && needle_len < len)
//         {
//             j = 0;
//             while(haystack[i] == needle[j] && haystack && needle)
//             {
//                 i++;
//                 j++;
//                 if(needle[j] == '\0')
//                     return((char *)&haystack[i - j]);
//             }
//             i++;   
//         }
//     }
//     return(NULL);
// }


// int main()
// {
// 	char *s1 = "AAAAAAAAAAAAA";
// 	size_t max = strlen(s1);
// 	char *i1 = strnstr(s1, s1, max);
// 	char *i2 = ft_strnstr(s1, s1, max);
//     printf("%s\n", ft_strnstr(((void *)0), "fake", 3));
//     printf("%s\n", strnstr(((void *)0), "fake", 3));
// }

































    


