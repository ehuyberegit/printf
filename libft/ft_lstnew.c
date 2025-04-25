/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:20:04 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 15:09:00 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}
/*
void print_list(t_list *lst)
{
    printf("List contents: ");
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list *list = NULL;
    t_list *node1 = ft_lstnew("First");
    t_list *node2 = ft_lstnew("Second");
    t_list *node3 = ft_lstnew("Third");
    
    printf("Adding first node...\n");
    ft_lstadd_back(&list, node1);
    print_list(list);
    
    printf("Adding second node...\n");
    ft_lstadd_back(&list, node2);
    print_list(list);
    
    printf("Adding third node...\n");
    ft_lstadd_back(&list, node3);
    print_list(list);
    
    return (0);
}
*/