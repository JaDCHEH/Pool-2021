/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:19:50 by cjad              #+#    #+#             */
/*   Updated: 2021/07/05 11:23:38 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int	nb, int	power)
{
	int	i;
	int	r;

	i = 1;
	r = 1;
	if (nb == 0 || nb == 1 || power == 0)
		return (1);
	while (i <= power)
	{
		r = r * nb;
		i++
	}
	return (r);
	}
