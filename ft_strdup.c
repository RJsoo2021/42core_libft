/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:14:14 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/30 10:08:48 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include<stdio.h>
// int main()
// {
//     char *s = "testing";
//     char *dest = ft_strdup(s);
//     int i;

//     i = 0;
//     while (dest[i])
//         printf("%c", dest[i++]);
// }
