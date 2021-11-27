/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:17:17 by cjad              #+#    #+#             */
/*   Updated: 2021/07/04 18:30:04 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	i;
	unsigned int	p;
	unsigned int	j;

	i = 0;
	p = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	while (src[p] != '\0' && p < size - 1)
	{
		dest[i + p] = src[p];
		p++;
	}
	dest[i + p] = '\0';
	return (size + j);
}
