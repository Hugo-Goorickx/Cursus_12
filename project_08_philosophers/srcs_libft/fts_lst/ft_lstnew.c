/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:29:48 by hgoorick          #+#    #+#             */
/*   Updated: 2021/11/25 17:29:51 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************ */
/*	Description :															*/
/*			Allocates and returns a new element. The content variable is 	*/
/*				initialized using the value of the content parameter. 		*/
/*				The variable "next" is initialized to NULL.					*/
/*																			*/
/*	Argument :																*/
/*			content		=>		The content of the new element.				*/
/*																			*/
/*	Return :																*/
/*			The new element													*/
/* ************************************************************************ */

#include "philo.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (0);
	list->next = 0;
	list->content = content;
	return (list);
}
