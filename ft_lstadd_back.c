/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:55:44 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/30 11:50:10 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	new -> next;
	next = NULL;
	ft_lstlast(*lst)-> next = new;
}

// int main()
// {
//     t_list *lst;
//     t_list *one;
//     t_list *two;

//     lst = ft_lstnew((void*)123);
//     one = ft_lstnew((void*)234);
//     two = ft_lstnew((void*)345);

//     ft_lstadd_back(&lst, one);
//     ft_lstadd_back(&lst, two);

//     while (lst)
//     {
//         printf("%ld\n", (uintptr_t)lst-> content);
//         lst = lst->next;
//     }
// }
