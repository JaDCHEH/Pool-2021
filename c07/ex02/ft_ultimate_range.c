/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 08:43:16 by cjad              #+#    #+#             */
/*   Updated: 2021/07/11 09:15:13 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
	int s;
    int i;

	if (min >= max)
	{
		*range[0] = NULL;
		return (-1);
	}
    if(min < max)
	{
		*range = (int*)malloc(sizeof(int)*(max - min));
    	s = max - min;
    	i = 0;
    	while (i < s)
    	{
        	range[0][i] = min + i;
        	i++;
    	}
	}
	return (max - min + 1);
}
