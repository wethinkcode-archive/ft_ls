/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_sort_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 07:10:45 by pmalope           #+#    #+#             */
/*   Updated: 2019/08/27 14:57:29 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		ft_compare_alpha(t_stat *elem1, t_stat *elem2)
{
	return (ft_strcmp(elem1->name, elem2->name));
}

int		ft_compare_time(t_stat *elem1, t_stat *elem2)
{
	return (elem1->date < elem2->date);
}
