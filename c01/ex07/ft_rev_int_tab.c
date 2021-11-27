/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:29:48 by cjad              #+#    #+#             */
/*   Updated: 2021/06/29 10:08:29 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tp;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		tp = tab[a];
		tab[a] = tab[b];
		tab[b] = tp;
		a++;
		b--;
	}
}