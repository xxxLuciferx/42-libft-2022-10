#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2)
{
	char 	*res;
	char	str1;
	char	str2;
;	int	i;
	int j;
	if(!s1)
		return(NULL);
	i = 0;
	j = 0;
	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	res = ft_calloc((str1 + str2 + 1) , (sizeof(char)));
	if (!res)
		return(NULL);
	while(j < str1)
	{
		res[j] = s1[j];
		j++;
	}
	while(i < str2)
	{
		res[i + j] = s2[i];
		i++;
	}
	// res[i + j] = '\0';
	return(res);
}
// }
// int main()
// {
// 	char *s1 = "hallo ";
// 	char *s2 = "world";
// 	char *m = ft_strjoin(s1,s2);
// 	printf("%s\n",m);
// }








































// /* ************************************************************************** */
// /*						                                                    */
// /*                                                        :::      ::::::::   */
// /*   ft_strjoin.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/10/12 21:36:34 by khaimer           #+#    #+#             */
// /*   Updated: 2022/10/12 21:55:54 by khaimer          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"

// char *ft_strjoin(char const *s1, char const *s2)
// {
//    	int	str1;
//     int	str2;
// 	int i;
//     int j;
// 	char	*string;

	
// 	i = 0;
//     j = 0;
//     if(!s1)
//         return (NULL);
// 	str1 = ft_strlen(s1);
// 	str2 = ft_strlen(s2);
// 	string = ft_calloc((str1 + str2 + 1), sizeof(char));
//     if(!string)
//         return (NULL);
//     while(i < str1)
//     {
//         string[i] = s1[i];
//         i++;
//     }
//     while (j < str2)
//     {
//         string[i+j] = s2[j];
//         j++;
//     }
// 	return(string);
// }


// #include <stdio.h>

// int main(){
//     char *s1 = "my favorite animal is";
// 	char *s2 = " ";
// 	char *s3 = "the nyancat";
// 	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);

//     printf("%s\n", res);


// }