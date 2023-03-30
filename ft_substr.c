/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:37:06 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/30 10:20:11 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = malloc(len * sizeof(char) + 1);
	if (!substr)
		return (0);
	while (i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

// int main()
// {
//     char s[] = "pneumonoultramicroscopic";
//     printf("%s", ft_substr(s, 8, 5));
// }
