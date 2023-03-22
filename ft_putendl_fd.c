/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:02:21 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/09 12:02:21 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    while (*s)
        write(fd, &(*s++), 1);
    write(fd, "\n", 1);
}

// int main()
// {
//     ft_putendl_fd("zugzwang", 1);
// }
