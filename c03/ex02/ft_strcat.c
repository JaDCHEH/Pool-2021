/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 08:56:01 by cjad              #+#    #+#             */
/*   Updated: 2021/07/03 13:44:50 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	while (dest[i] != '\0')
		i++;
	while (src[p] != '\0')
	{
		dest[i + p] = src[p];
		p++;
	}
	dest[i + p] = '\0';
	return (dest);
}
