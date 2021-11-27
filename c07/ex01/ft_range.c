/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:35:41 by cjad              #+#    #+#             */
/*   Updated: 2021/07/11 09:15:20 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int *ft_range(int min, int max)
{
    int *t;
    int s;
    int i;

	if (min >= max)
		return (NULL);
    if(min < max)
	{
		t = (int*)malloc(sizeof(int)*(max - min));
    	s = max - min;
    	i = 0;
    	while (i < s)
    	{
        	t[i] = min + i;
        	i++;
    	}
	}
	return (t);
}
