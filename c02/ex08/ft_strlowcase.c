/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:19:34 by cjad              #+#    #+#             */
/*   Updated: 2021/06/29 13:20:52 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
