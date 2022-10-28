/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:09:12 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/15 00:13:06 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int        scanner(char const *s1, char const *set)
{
    int i;
    int j;
    int start;

    start = 0;
    i = 0;
    j = 0;
    while (s1 && set)
    {
        if(s1[i] == set[j])
        {
            i++;
            start++;
            continue;
        }
        if (s1[i] != set[j])
        {
            j++;
            if(set[j] == '\0')
              return(start);
            continue;
        }
    }
    return(start);
}
int back_scanner(char const *s1, char const *set)
{
    int len;
    int end;
    int j;

    j = 0;
    end = 0;
    len = (ft_strlen(s1) - 1);
    while(s1[len] && set)
    {
        if(s1[len] == set[j])
        {
            len--;
            end++;
            continue;
        }
        else if(s1[len] != set[j])
        {
            j++;
            if(set[j] == '\0')
              return(end);
            continue;
        }
    }
    return(end);
}


char *ft_strtrim(char const *s1, char const *set)
{
    int zab;
    int start;
    int end;
    int len;
    char *string;
    
    len = ft_strlen(s1);
    start = scanner(s1, set);
    end = back_scanner(s1, set);
    string = malloc(((len + 1) - (end + start))*sizeof(char));
    zab = len - end;
    while(s1)
    {
        *string = s1[start];
        start++;
        string++;
      if(s1[start] == s1[zab])
      {
        *string = '\0';
        return(string);
      }
    }
    return(string);
}
int main()
{
    char *s1 = "AABHDHJKJBAA";
    char *set = "AB";
    char *ret = ft_strtrim(s1, set);
    printf("%s",ret);
}
	