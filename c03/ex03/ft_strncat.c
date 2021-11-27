/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 13:46:21 by cjad              #+#    #+#             */
/*   Updated: 2021/07/03 13:49:37 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	unsigned int	i;
	unsigned int	p;

	i = 0;
	p = 0;
	while (dest[i] != '\0')
		i++;
	while (src[p] != '\0' && p < n)
	{
		dest[i + p] = src[p];
		p++;
	}
	dest[i + p] = '\0';
	return (dest);
}
