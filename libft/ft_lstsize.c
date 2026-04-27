/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 22:04:26 by vsack             #+#    #+#             */
/*   Updated: 2026/04/25 18:30:10 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	int		size;

	// --- Test 1: The Empty List ---
	// If the list is empty, ft_lstsize should return 0.
	head = NULL;
	printf("Size of NULL list: %d\n", ft_lstsize(head));
	// --- Test 2: Populated List ---
	// We create 3 nodes using your ft_lstnew function
	elem1 = ft_lstnew("Node 1");
	elem2 = ft_lstnew("Node 2");
	elem3 = ft_lstnew("Node 3");
	// Manually linking them: elem1 -> elem2 -> elem3 -> NULL
	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL; // The end of the list
	size = ft_lstsize(elem1);
	printf("Size of list with 3 nodes: %d\n", size);
	// Note: In a real project, you'd use ft_lstclear to free these,
	// but for a quick size test, this proves the logic works!
	return (0);
}
	*/